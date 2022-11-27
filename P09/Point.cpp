#include "Point.h"
#include <iostream>
#include <string>
#include <math.h>

Point::Point(){x_ = 0, y_ = 0;}
Point::Point(int x, int y){x_ = x, y_ = y;}

void Point::show() const{
    std::cout << '(' << x_ << ',' << y_ << ')';
}

double Point::distance(Point p) const{
    return sqrt(pow(p.x_ - x_,2) + pow(p.y_ - y_,2));
}
