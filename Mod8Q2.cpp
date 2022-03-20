//KristinaHelwing
//CS110B
//031922
//This program determines if a C-string begins with a specified prefix

#include <iostream>
// #include <cstdlib>
// #include <fstream>
// #include <string>
using namespace std;

/*Write a function to determine if a C-string begins with a specified prefix.  
It should have the following signature:
 bool starts(char *str, char *prefix) 
It should return true if str begins with prefix, false if not.  
It should return false if prefix is longer than str. 
See the table below for some examples of what your function should return for various cases:*/

bool starts(const char *str, const char *prefix)
{
    return false;
}

int main ()
{
    cout << "foobar, foo " << starts("foobar", "foo") << " (should be true)" << endl;
    cout << "fewbar, fu " << starts("fewbar", "fu" ) << " (should be true)" << endl;
    cout << "fo, foo " << starts("fo" , "foo") << " (should be false)" << endl;
    return 0;
}