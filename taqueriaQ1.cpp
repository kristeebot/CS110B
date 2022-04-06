// KristinaHelwing
// CS110B
// This program tracks and analyzes burritto sales

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Two parallel 4-element arrays; one array of type string to store the names of the burrito types,
const int NUM_TYPES = 4;
string burritoType[NUM_TYPES] = {"carnitas", "beef", "shrimp", "veggie"};
int numSold[NUM_TYPES] = {0, 0, 0, 0};

int main()
{
    // for loop over num_types,
    for (int i = 0; i < NUM_TYPES; i++)
    {
        cout << "How many " << burritoType[i] << " did you sell?" << endl;
        int burritoCount = 0;
        cin >> burritoCount; 
        numSold [i] = burritoCount;
    }
    int bestSeller = 0;
    int totalSold = 0;
    int bestSellerIndex = 0;
    for (int i = 0; i < NUM_TYPES; i++)
    {
        int currentSold = numSold[i];
        totalSold += currentSold;
        if (currentSold > bestSeller)
        {
            bestSeller = currentSold;
            bestSellerIndex = i;
        }
    }
    cout << "Your best selling burrito is " << burritoType[bestSellerIndex] <<endl;
}
/*SAMPLE OUTPUT:
How many carnitas did you sell?
12
How many beef did you sell?
2
How many shrimp did you sell?
1
How many veggie did you sell?
0
Your best selling burrito is carnitas
*/