
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Rectangle.h"
using namespace std;

void Rectangle::initName(char *n)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

Rectangle::Rectangle()
{
    initName("");
    width = 0;
    length = 0;
}

Rectangle::Rectangle(double w, double l, char *n)
{
    initName(n);
    width = w;
    length = l;
}

// Copy Constructor
Rectangle::Rectangle(Rectangle &rhs)
{
    name = NULL;
    *this = rhs;
}

Rectangle::~Rectangle()
{
    delete[] name;
}

// overloaded = operator
void Rectangle::operator=(const Rectangle &r)
{
    length = r.length;
    width = r.width;
    delete[] name;
    initName(r.name);
}

void Rectangle::print()
{
    cout << name << " width: " << width << " length: " << length << endl;
}

int main()
{
    Rectangle r1;
    r1.print();
    Rectangle r2(10, 20, "r2");
    r2.print();
    Rectangle r3(r2);
    r1 = r3;
    r3.print();
    r1.print();
    return 0;
}