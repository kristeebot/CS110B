// KristinaHelwing
// CS110B
// 041122
// This program

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{

private:
    double radius;
    double x;
    double y;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    void setX(double value)
    {
        x = value;
    }
    void setY(double value)
    {
        y = value;
    }
    double getRadius() const
    {
        return radius;
    }
    double getX() const
    {
        return x;
    }
    double getY() const
    {
        return y;
    }

    // The first six member functions are straightforward functions to set and get the private member variables.
    double getArea() const;

    /*This member function should return the area of the circle.
    When you are calculating the area you can use 3.14 for pi.
    The formula is radius * radius * pi. */
    bool containsPoint(double xValue, double yValue) const;
};
#endif // CIRCLE_H
