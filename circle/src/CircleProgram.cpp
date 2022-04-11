// KristinaHelwing
// CS110B
// 041122
// This program 

#include <iostream>
#include <cstdlib>
#include "Circle.h"
using namespace std;

int main() {
    Circle my_circle;
    my_circle.setRadius(5);
    my_circle.setX(10);
    my_circle.setY(10);
    cout << my_circle.getArea() << endl;
    return 0;
}