// KristinaHelwing
// CS110B
// 040522

/*
The local taqueria wants you to write a program which tracks the number of burritos they sell each day
and help them analyze their business.
Your program should ask the user for the number of different burrito types sold,
then get the names of the types and the number of burritos sold of each type of that day.
Print out a daily report listing sales for each burrito type and total number of all burritos sold.
So far, this sounds very similar to a previous exercise!
This difference this time is that you must use a struct called SalesRecord which has two fields --
a string containing the name of the burrito, and an int containing the number of burritos sold of this type.
You must have one dynamically allocated array of SalesRecord structs.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct SalesRecord
{
    string burritoName;
    int totalSold;
    /* data */
};

int main()
{
    int burritoTypes = 3;
    SalesRecord *salesRecords = new SalesRecord[burritoTypes];
    for (int i = 0; i < burritoTypes; i++)
    {
        cout <<"Which burrito was sold: " << endl;
        cin >> salesRecords[i].burritoName;
        salesRecords[i].totalSold = i+1;
    }
    for (int i = 0; i < burritoTypes; i++)
    {
        cout << "burrito: " << salesRecords[i].burritoName << " total sold: " <<salesRecords[i].totalSold <<endl;
    }
    cout << "done";
    delete [] salesRecords;
    return 0;
}
