//KristinaHelwing
//CS110B
//031122
//This Program renames products and adds $2 to each price

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
