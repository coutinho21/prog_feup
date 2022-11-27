class Point2d {
  public:
    Point2d();                   // default constructor (builds origin)
    Point2d(const Point2d& p);   // copy constructor
    Point2d(double x, double y); // constructor using supplied coordinates
    double get_x() const;  // accessor for X coordinate
    double get_y() const;  // accessor for Y coordinate
    void set_x(double x);  // mutator for X coordinate
    void set_y(double y);  // mutator for Y coordinate
    void translate(const Point2d& t);           // translate coordinates
    double distance_to(const Point2d& p) const; // get distance to given point
  private: 
    double x;  // X coordinate
    double y;  // Y coordinate
};
