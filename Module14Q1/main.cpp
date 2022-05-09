#include <stdio.h>
#include <iostream>
using namespace std;
#include "Assignment.h"

int main()
{
    int style = 0;
    int efficiency = 0;
    int functionality =0;
    cout << "What is the score for style (max 25 points):  ";
    cin >> style;
    cout << "What is the score for efficiency (max 25 points): ";
    cin >> efficiency;
    cout << "What is the score for functionality (max 50 points): ";
    cin >> functionality;
    Assignment ass;
    ass.set(style, efficiency, functionality);
    cout << "Score: " << ass.getLetterGrade() << endl;

    return 0;
};
/* TODO Check for valid inputs */