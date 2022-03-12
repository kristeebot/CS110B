//KristinaHelwing
//CS110B
//031122
//This Program renames products

//Your program should create two arrays in main()
//- one string array with 3 burrito types and one float array with 3 associated prices, defined below:

/* Appending a string
string type = "Carnitas";
type = type + "Especial";
"Carnitas Especial"*/

/* Now, main should declare a string pointer and a float pointer.  
Using the pointers and a for loop, add " Especial" to the end of each element in the names array, 
and add 2.00 to each element in the prices array.  Do not use array notation, i.e. names[1], 
use only pointer notation, i.e. *names or *(names+1) etc.  Finally, using your pointers and a for loop, print out the new menu. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string names[] = {"Carnitas", "Pollo", "Veggie"};
    float prices[] = {6.95, 6.25, 5.95};

    // Two parallel 4-element arrays; one array of type string to store the names of the burrito types,
    const int NUM_TYPES = 3;

    string * name = names; 
    float * price = prices;
    // for loop over num_types,
    for (int i = 0; i < NUM_TYPES; i++)
    {
        cout << *name  << endl;
        name ++;
    }
}
