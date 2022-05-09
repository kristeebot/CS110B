#include <iostream>
using namespace std;
#include "IntCollection.h"

int main()
{
    IntCollection c;
    c.add(45);
    c.add(-210);
    c.add(77);
    c.add(2);
    c.add(-21);
    c.add(42);
    c.add(7);
    IntCollection d = c;
    d.print();
    IntCollection e = d << 3 << 4 << 5;
    e.print();
    IntCollection f(e);
    if (f == e)
    {
        cout << "Copy constructor works" << endl;
    }
}

/*SAMPLE OUTPUT
-21
42
7
45
-210
77
2
-21
42
7
3
4
5
Copy constructor works
Process exited with status 0
*/