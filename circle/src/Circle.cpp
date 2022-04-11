#include "Circle.h"

static const double PI = 3.1415;

double Circle::getArea() const
{
    return radius * radius * PI;
}
bool Circle::containsPoint(double xValue, double yValue) const
{
    return false;
}