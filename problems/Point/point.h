#ifndef __POINT_H
#define __POINT_H
#include <math.h>

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4,
  X_axis,
  Y_axis,
  Origin
};

class Point {
  int m_x;
  int m_y;
  public:
  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin()  const;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
};

#endif
