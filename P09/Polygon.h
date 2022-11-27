#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"
#include <vector>

class Polygon{
    public:
        Polygon();
        Polygon(std::vector<Point> polygon);
        void show() const;
        bool get_vertex(size_t index, Point& p) const;
        bool add_vertex(size_t index, Point p);
        double perimeter() const;
    private:
        std::vector<Point> polygon_;
};

#endif