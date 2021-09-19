/**
 * @file circle.h
 * @author Bharath G (Bharath.g@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __CIRCLE_H__ 
#define __CIRCLE_H__

const double PI = 3.14;
class circle{
    double radius;

public:

    circle();
    circle(double);
    circle(const circle&);
    /**
     * @brief Get the radius object
     * 
     * @return double 
     */
    double get_radius(); //getRadius, Getradius
    /**
     * @brief Calculate the area of circle
     * 
     * @return double 
     */
    double area();
    /**
     * @brief Calculate the area of circumference
     * 
     * @return double 
     */
    double circumference();
    /**
     * @brief Calculate the area of diameter
     * 
     * @return double 
     */
    double diameter();
    void set_radius(double);

};

#endif  // __CIRCLE_H__