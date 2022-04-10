// KristinaHelwing
// CS110B
// 040922
// This program tracks league scores using structs

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;
/*Rewrite your league application from Assignment 5 so that each team/wins pair is stored in a struct named WinRecord.
Your program must meet the following requirements:

1.  The WinRecord struct must have two fields: an int named wins, and a char* named name.
name will point to a dynamically allocated array of characters, see requirement 4 below.

2.  Instead of using two parallel arrays like Assignment 6, the data must be stored in a single array
-- a dynamically allocated array of WinRecord structs.
You must ask the user how many teams are in the league to determine how big this array needs to be and then dynamically allocate memory for it using the new operator.  It must deallocate the memory when it is done with the array using delete [].

3.  Your program must use three functions that accept the array of WinRecord structs by address (i.e., pass a WinRecord pointer):

void initializeData(WinRecord* standings, int size)
void sortData(WinRecord* standings, int size)
void displayData(WinRecord* standings, int size)
4.  Note that the name field of each WinRecord struct is just a char* which you need to use to store a C-String. 
For this assignment, you must use C-strings, not C++ string objects.  
Unlike a C++ string object, the memory to store the actual character array 
for the C-String is not allocated for you automatically!  
I encourage you to develop a function to do this on your own, but I have provided the getLine() function
(Links to an external site.)getLine.cpp (Links to an external site.) to use if you wish.  Note that this function returns a line of text from the keyboard contained in a dynamically allocated array.  You will thus need to deallocate this memory using delete [] when you are done using any arrays you allocated using this function.  Towards the end of main() is a reasonable place to do this allocation.  Note that this is in addition to deallocating the array of WinRecord structs discussed in step 2 above!

5.  As usual, provide sample output demonstrating your program works correctly and submit a plaintext cpp file via Canvas.  */

// read in a line of text and return it in a dynamically allocated array
char *getLine()

{
    const int BUFFER_SIZE = 1000;

    // Allocate a buffer local to this function
    char buffer[BUFFER_SIZE];

    // Clear the input stream as per
    // https://stackoverflow.com/questions/7786994/c-getline-isnt-waiting-for-input-from-console-when-called-multiple-times
    cin.ignore();

    // Use cin.getline() to input the buffer from the user
    cin.getline(buffer, BUFFER_SIZE);

    // Find the length of the string in buffer
    int length = strlen(buffer);

    // Dynamically allocate an array, to be returned
    char *rValue = new char[length + 1];

    // Copy the string into the dynamically allocated array
    strncpy(rValue, buffer, length);

    // Return the address of the dynamically allocated array
    return rValue;
}
struct WinRecord
{
    char *name;
    int wins;
};

void initializeData(WinRecord *standings, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i + 1 << endl;
        standings[i].name = getLine();
        cout << "Enter the wins for team #" << i + 1 << endl;
        int winTally;
        cin >> winTally;
        standings[i].wins = winTally;
    }
}
void sortData(WinRecord *standings, int size)
{
}
void displayData(WinRecord *standings, int size)
{
    cout << "League Standings: " << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << standings[i].name << ": " << standings[i].wins << endl;
    }
}

int main()
{
    cout << "How many teams are in the league: ";
    int teamCount = 0;
    cin >> teamCount;
    WinRecord *winRecords = new WinRecord[teamCount];
    initializeData(winRecords, teamCount);
    sortData(winRecords, teamCount);
    displayData(winRecords, teamCount);
    delete[] winRecords;
    return 0;
}
