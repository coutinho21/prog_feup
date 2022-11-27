#include <iostream>
#include <vector>
#include "Figure.h"
 
using namespace std;

class Rectangle : public Figure {
    public:
        Rectangle(double x_center=0, double y_center=0, double width = 0, double height = 0) : Figure(x_center,y_center), width_(width),height_(height) {}
        void draw() const override { cout << "R(" << x_center_ << ',' << y_center_ << ")(" << width_ << ',' << height_ << ')'; } 
        ~Rectangle() override { }
    private:
        double width_, height_;
};

class Circle : public Figure {
    public:
        Circle(double x_center = 0, double y_center = 0, double radius = 0) : Figure(x_center,y_center), radius_(radius) { }
        void draw() const override { cout << "C(" << x_center_ << ',' << y_center_ << ")(" << radius_ <<  ')'; } 
        ~Circle() override { }
    private:
        double radius_;
};