//KristinaHelwing
//CS110B
//March14,2022
//This Program uses dynamc memory allocation to compute league wins
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <fstream>
#include <string>

/* 
All of the user input must be done in a function named initializeArrays.
It must have the following signature:
*/
void initializeArrays(string teamName[], int wins[], int size);
void testInitializeArrays(string teamName[], int wins[], int size);

/* 
two more functions: one to sort both arrays,
and one to display the final (sorted) list of team names and scores.
 They must have the following signatures: 
*/
void sortData(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);


void initializeData(string names[], int wins[], int size);
void sort(string names[], int wins[], int size);
void display(string names[], int wins[], int size);

int main()
{
    /*
    Your modified league program should start out by asking the user
    how many teams will be entered.
    */
    int teamQuantity;
    cout << "How many teams are there?: ";
    cin >> teamQuantity;
    /*
    It should then dynamically allocate two appropriate arrays, and
    proceed just like the original League assignment, calling the
     above three functions.  When your program is done using the arrays, 
     don't forget to use delete [] to return their memory to the system.
    */
    string *teamName = new string[teamQuantity];
    int *wins = new int [teamQuantity];
    initializeArrays(teamName, wins, teamQuantity);
    sortData(teamName, wins, teamQuantity);
    displayData(teamName, wins, teamQuantity);
    delete [] teamName;
    delete [] wins;
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
/* SAMPLE OUTPUT
How many teams are there?: 4
Enter team #1
Mariners
Enter the wins for team #1
75
Enter team #2
Dodgers
Enter the wins for team #2
91
Enter team #3
BlueJays
Enter the wins for team #3
92
Enter team #4
Expos
Enter the wins for team #4
65
League Standings: 
BlueJays 92
Dodgers 91
Mariners 75
Expos 65
*/
