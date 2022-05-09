// CS110B
// KristinaHelwing

#include <stdio.h>
#include <iostream>
using namespace std;
#include "GradedActivity.h"


char GradedActivity::getLetterGrade() const
{
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}
