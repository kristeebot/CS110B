/* Write a program that records and displays league standings for a baseball league.
The program will ask the user to enter five team names, and five win amounts.
 It will store the data in memory, and print it back out sorted by wins from highest to lowest.
The data must be stored in two parallel arrays: an array of strings named teams, and an array of ints named wins.  These arrays must be declared in the main() function.  You can assume that the league has five teams, so each of the arrays should have five elements.
As usual, you may not use any global arrays or global variables.
All of the user input must be done in a function named initializeArrays.  It must have the following signature: */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <fstream>
#include <string>

/*
Rewrite your League program from Assignment 5 so that it uses Dynamic Memory Allocation (DMA) to create the team names and scores arrays.

This is a good test of the modularity of your program. You will only need to make slight modifications to your main() function if you wrote your original program using functions similar to the following:

void initializeData(string names[], int wins[], int size)
void sort(string names[], int wins[], int size)
void display(string names[], int wins[], int size)
*/

// All of the user input must be done in a function named initializeArrays.
// It must have the following signature:
void initializeArrays(string teamName[], int wins[], int size);
void testInitializeArrays(string teamName[], int wins[], int size);

// two more functions: one to sort both arrays,
//  and one to display the final (sorted) list of team names and scores.
// They must have the following signatures:
void sortData(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);
const int TEAM_COUNT = 5;

int main()
{
    string teamName[TEAM_COUNT];
    int wins[TEAM_COUNT];
    initializeArrays(teamName, wins, TEAM_COUNT);
    sortData(teamName, wins, TEAM_COUNT);
    displayData(teamName, wins, TEAM_COUNT);
}
void initializeArrays(string teamName[], int wins[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i + 1 << endl;
        string name;
        cin >> name;
        teamName[i] = name;
        cout << "Enter the wins for team #" << i + 1 << endl;
        int winTally;
        cin >> winTally;
        wins[i] = winTally;
    }
}
// selection sort the win tally for teams
void sortData(string names[], int wins[], int size)
{
    int minIndex, minValue;
    for (int start = 0; start < (size - 1); ++start)
    {
        minIndex = start;
        minValue = wins[start];
        for (int index = start + 1; index < size; index++)
        {
            if (wins[index] >= minValue)
            {
                minValue = wins[index];
                minIndex = index;
            }
        }
        swap(wins[minIndex], wins[start]);
        swap(names[minIndex], names[start]);
    }
}

void displayData(string names[], int wins[], int size)
{
    cout << "League Standings: " << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << names[i] << " " << wins[i] << endl;
    }
}
