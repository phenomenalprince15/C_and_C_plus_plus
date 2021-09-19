#include <iostream>
#include "box.h"

Box::Box(): m_length(0.0),m_breadth(0.0),m_height(0.0){

}

Box::Box(double l, double b, double h) : m_length(l), m_breadth(b),m_height(h){

}

Box::Box(const Box& dis) : m_length(dis.m_length), m_breadth(dis.m_breadth), m_height(dis.m_height){

}

double Box:: length() const{
    return m_length;
}

double Box:: breadth() const{
    return m_breadth;
}
double Box:: height() const{
    return m_height;
}

double Box:: volume() const {
    return (m_length * m_breadth * m_height);
}

void Box:: display() const {
    std:: cout<< m_length << "," << m_breadth << "," << m_height << std:: endl;
}
