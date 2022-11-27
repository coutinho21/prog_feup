#include "Polygon.h"
#include <iostream>
#include <vector>

Polygon::Polygon(){polygon_ = {};}

Polygon::Polygon(std::vector<Point> polygon){polygon_ = polygon;}

void Polygon::show() const{
    std::cout << '{';
    for(Point p: polygon_)
        p.show();
    std::cout << '}';
}

bool Polygon::get_vertex(size_t index, Point& p) const{
    if(index >= 1 && index <= polygon_.size()){
        p = polygon_[index-1];
        return true;
    }
    else
        return false;
}

bool Polygon::add_vertex(size_t index, Point p){
    if(index >= 1 && index <= polygon_.size() + 1){
        polygon_.insert(polygon_.begin()+index-1,p);
        return true;
    }
    else
        return false;
}

double Polygon::perimeter() const{
    double per = 0;
    for(size_t i = 0; i < polygon_.size()-1 ;i++){
        per += polygon_[i].distance(polygon_[i+1]);
    }
    per += polygon_[polygon_.size()-1].distance(polygon_[0]);
    return per;
}