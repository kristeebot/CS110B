#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include "GradedActivity.h"


class Assignment : public GradedActivity
{
private:
    int functionality;

    int efficiency;

    int style;

public:
void set(int f, int e, int s);
};

#endif // ASSIGNMENT_H