//KristinaHelwing
//CS110B
//031922
//This program determines if a C-string begins with a specified prefix

#include <iostream>
using namespace std;


bool starts(const char *str, const char *prefix)
{
    int prefixLen = strlen(prefix);
    if (strlen(str) < prefixLen) 
    {
        return false;
    }
    for (int i = 0; i < prefixLen; ++i)
    {
        if (*(str +i) != *(prefix +i))
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    assert(starts("airplanes", "air"));
    assert(!starts("airplanes", "abc"));
    assert(!starts("airplanes", "plane"));
    assert(starts("airplanes", "airplane"));
    assert(!starts("air", "airplane"));
    return 0;
}