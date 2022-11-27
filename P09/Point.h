#ifndef POINT_H
#define POINT_H

class Point{
    public:
        Point();
        Point(int x, int y);
        void show() const;
        double distance(Point p) const;
    private:
        int x_;
        int y_;
};


#endif