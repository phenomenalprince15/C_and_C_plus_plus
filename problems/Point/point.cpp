#include <iostream>
#include "point.h"
#include <math.h>

Point::Point() : m_x(0), m_y(0) {}

Point::Point(int x, int y) : m_x(x), m_y(y) {}

Point::Point(const Point &ref)
{
    m_x = ref.m_x;
    m_y = ref.m_y;
}

double Point::distanceFromOrigin() const
{
    double distance;
    distance = sqrt(pow(m_x, 2) + pow(m_y, 2));
    return distance;
}

Quadrant Point::quadrant() const
{
    if(isOnXAxis() == false){
        return X_axis;
    }else if(isOnYAxis() == false){
        return Y_axis;
    }else if(isOrigin()){
        return Origin;
    }
    else if (m_x < 0 && m_y < 0)
    {
        return Q3;
    }
    else if (m_x < 0 && m_y > 0)
    {
        return Q2;
    }
    else if (m_x > 0 && m_y < 0)
    {
        return Q4;
    }
    else
    {
        return Q1;
    }

}

bool Point::isOrigin() const
{
    if (m_x == 0 && m_y == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Point::isOnXAxis() const
{
    if (m_y == 0 && m_x != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool Point::isOnYAxis() const
{
    if (m_x == 0 && m_y != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
