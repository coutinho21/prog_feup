#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
  Figure(double x_center=0, double y_center=0)
    : x_center_(x_center), y_center_(y_center) { }
  virtual void draw() const = 0;
  virtual ~Figure() { }
protected:
  double x_center_;
  double y_center_;
};

#endif 
