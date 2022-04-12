// Class implementation for MainCircleProgram.cpp

#include <cmath>
#include "Circle.h"

double Circle::getArea() const
{
    return radius * radius * PI;
}
/*For example, let's say we have instantiated a Circle object named myCircle which has x=2.0, y=3.0, and radius=2.0.
myCircle.containsPoint(2.0, 4.0) should return true because (2.0, 4.0) is contained in myCircle.
myCircle.containsPoint(2.0, 10.0) should return false because (2.0, 10.0) is not contained in myCircle.*/

bool Circle::containsPoint(double xValue, double yValue) const
{
    // euclidean distance
    double lenA = xValue - x;
    double lenB = yValue - y;
    return sqrt(lenA * lenA + lenB * lenB) < radius;
}