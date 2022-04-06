// CS110B
// KRISTINA HELWING
// QUESTION 2
// This program tracks assignment grades
#include <iostream>
using namespace std;

int main()
{
    // Ask the user how many assignments there are.
    int assignmentCount = 0;
    cout << "How many assignments are there?: ";
    cin >> assignmentCount;
    // Input a grade for each assignment from the user.
    int totalPoints = 0;
    for (int i = 0; i < assignmentCount; i++)
    {
        cout << "Enter assignment grade: ";
        int grade = 0;
        cin >> grade;
        // Make sure each grade is at least 0 and at most 100
        if (grade >= 0 && grade <= 100)
        {
            totalPoints += grade;
        }
    }
    // Print out the total points scored, and the average (mean) score.
    int averageGrade = totalPoints / assignmentCount;
    cout << "Total Points: " << totalPoints << " average: " << averageGrade << endl;

    // If you have time, add these extra features:
    // print out the letter grade for the average score using the standard grading formula (90 or higher is an A, 80 or higher is a B, etc.)
    if (averageGrade <60)
    {
        cout <<"Your letter grade is: F";
    }
    else if (averageGrade <70)
    {
        cout <<"Your letter grade is: D";
    }
    else if (averageGrade <80)
    {
         cout <<"Your letter grade is: C";
    }
    else if (averageGrade <90)
    {
         cout <<"Your letter grade is: B";
    }
    else
    {
         cout <<"Your letter grade is: A";
    }
    cout << endl;
}
