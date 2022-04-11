// KristinaHelwing
// CS110B
// 041022
// This program checks rectangles for squares

#include <iostream>
#include <cstdlib>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    //- returns the perimeter of the rectangle, i.e. 2*width+2*length
    double getPerimeter() const;

    //- returns true if the rectangle is a square, i.e. length is equal to width, returns false if not
    bool isSquare() const;
};

// set the width of the rectangle
void Rectangle::setWidth(double w)
{
    width = w;
}
// get the width of the rectangle
double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setLength(double l)
{
    length = l;
}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getArea() const
{
    return length * width;
}
//- returns the perimeter of the rectangle, i.e. 2*width+2*length
double Rectangle::getPerimeter() const
{
    return 2 * width + 2 * length;
}

//- returns true if the rectangle is a square, i.e. length is equal to width, returns false if not
bool Rectangle::isSquare() const
{
    return width == length;
}

int main()
{
    Rectangle r;
    r.setWidth(3);
    r.setLength(5);
    cout << "width: " << r.getWidth() << endl;
    cout << "length: " << r.getLength() << endl;
    cout << "area: " << r.getArea() << endl;
    cout << "perimeter: " << r.getPerimeter() << endl;
    cout << "is square: " << r.isSquare() << endl;

    return 0;
}