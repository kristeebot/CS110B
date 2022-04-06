//KristinaHelwing
//CS110B
//040522

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
    // The compiler knows the memory location of this array,
    // so that location IS a pointer, and it is assigned
    // to a variable called "names".
    string names[] = {"Carnitas", "Pollo", "Veggie"};

    float prices[] = {6.95, 6.25, 5.95};

    const int NUM_TYPES = 3;

    string* name = names; 
    float* price = prices;
    // for loop over num_types,
    for (int i = 0; i < NUM_TYPES; i++)
    {
        *name = *name + " Especial";
        *price = *price + 2.0;
        name++; 
        price++;
    }

    // Rewind the pointers to the start of the arrays
    name = names;
    price = prices;
    for (int i = 0; i < NUM_TYPES; i++)
    {
        cout << "Dish: " << *(name + i) << endl <<
         "Price: " << *(price + i)<< endl;
    }

}
