// Main circle program header file

#ifndef CIRCLE_H
#define CIRCLE_H

static const double PI = 3.1415;

class Circle
{

private:
    double radius;
    double x;
    double y;
    // The first six member functions are straightforward functions to set and get the private member variables.
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

    double getArea() const;

    /*This member function should return the area of the circle.
    When you are calculating the area you can use 3.14 for pi.
    The formula is radius * radius * pi. */
    bool containsPoint(double xValue, double yValue) const;
};
#endif // CIRCLE_H
