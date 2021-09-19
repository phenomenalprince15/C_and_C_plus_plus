#ifndef __BOX_H
#define __BOX_H

class Box {
  double m_length;
  double m_breadth;
  double m_height;
  public:
  Box();
  Box(double,double,double);
  Box(double);
  Box(const Box&);
  double length() const;
  double breadth() const;
  double height() const;
  double volume() const;
  void display() const;
};

#endif