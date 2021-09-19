#include "circle.h"

circle::circle():radius(1.0)
{

}

circle::circle(double rad):radius(rad)
{

}

circle::circle(const circle& ref):radius(ref.radius)
{
}

double circle::get_radius()
{
    return radius;
}
double circle::area()
{
    return PI * radius * radius;
}
double circle::circumference()
{
    return 2 * PI * radius;
}
double circle::diameter()
{
    return 2 * radius;
}

void circle::set_radius(double val)
{
    radius = val;
}