// KristinaHelwing
// CS110B
// 040922
// This program tracks league scores using structs

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
    int burritoTypes = 0;
    cout << "How many burrito types are there?: ";
    cin >> burritoTypes;
    SalesRecord *salesRecords = new SalesRecord[burritoTypes];
    for (int i = 0; i < burritoTypes; i++)
    {
        cout << "Which burrito was sold: " << endl;
        cin >> salesRecords[i].burritoName;
        cout << "How many did you sell: ";
        cin >> salesRecords[i].totalSold;
    }
    int allBurittos = 0;
    for (int i = 0; i < burritoTypes; i++)
    {
        cout << "burrito: " << salesRecords[i].burritoName << " total sold: " << salesRecords[i].totalSold << endl;
        allBurittos += salesRecords[i].totalSold;
    }
    cout << "Total of all burrito sales is: " << allBurittos << endl;
    delete[] salesRecords;
    return 0;
}
