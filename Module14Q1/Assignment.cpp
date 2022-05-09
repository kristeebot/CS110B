#include "Assignment.h"

void Assignment::set(int f, int e, int s)
{
    functionality = f;
    efficiency = e;
    style = s;
    setScore(functionality + efficiency + style);
}


