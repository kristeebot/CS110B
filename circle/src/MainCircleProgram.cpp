// KristinaHelwing
// KristinaHelwing
// CS110B
// 041122
// This program returns the area of a circle

#include <iostream>
#include <cstdlib>
#include "Circle.h"
using namespace std;


int main()
{
    Circle my_circle;
    my_circle.setRadius(5);
    my_circle.setX(10);
    my_circle.setY(10);
    cout << my_circle.getArea() << endl;
    // Create a local circle object and set its x, y, and radius. Verify that its area is calculated correctly.
    Circle circleA;
    circleA.setRadius(1);
    circleA.setX(0);
    circleA.setY(0);
    assert(circleA.getArea() == PI);
    // Create a circle pointer, and point it at your local circle object.
    Circle *circlePtr = &circleA;
    // Use this pointer to set its x, y, and radius values to new values.
    circlePtr->setRadius(2);
    circlePtr->setX(2);
    circlePtr->setY(2);
    // Using your pointer, verify that your containsPoint() function works by trying a point which is in fact in your circle, and showing it returns true.
    assert(circlePtr->containsPoint(2.5, 2.5));
    // Also, try a different point which is not in your circle and show it returns false.
    assert(!circlePtr->containsPoint(2, 5));
    return 0;
}
/* SAMPLE OUTPUT
1 arguments:
argv[0] = '/Users/kristinahelwing/CS110B/circle/src/MainCircleProgram'
78.5375
Process exited with status 0
logout
*/