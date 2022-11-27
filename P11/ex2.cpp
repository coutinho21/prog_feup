#include <cmath>
#include <iostream>
#include <iomanip>
#include "Shape.h"

using namespace std;

class Circle : public Shape{
    public:
        Circle(point center, double radius);
        const point& get_center() const { return Shape::get_center(); }
        double area() const override{ return M_PI*pow(radius_,2);}
        double perimeter() const override{ return 2*M_PI*radius_;}
        bool contains(const point& p) const override{ 
            return pow((p.x - get_center().x),2) + pow((p.y - get_center().y),2) <= radius_*radius_;
            }

    private:
        double radius_;
};

Circle::Circle(point center, double radius):Shape(center){
    radius_ = radius;
}

class Rectangle:public Shape{
    public:
        Rectangle(point center, double width, double height);
        const point& get_center() const { return Shape::get_center(); }
        double area() const override{ return width_*height_;}
        double perimeter() const override{ return 2*width_ + 2*height_;}
        bool contains(const point& p) const override{ return (p.x <= get_center().x + width_/2) && (p.x >= get_center().x - width_/2) && (p.y <= get_center().y + height_/2) && (p.y >= get_center().y - height_/2);}

    private:
        double width_, height_;
};

Rectangle::Rectangle(point center, double width, double height):Shape(center){
    width_ = width;
    height_ = height;
}