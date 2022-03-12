
//// Ages in C++
///This is a program that categorizes the ages of people
// Kristina Helwing, CS110B

#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    cout << "Please input your age: ";
    cin >> age;
    //If the user types in a negative age, your program should tell the user that a negative age is an error!
    if (age < 0)
    {
        cout << "a negative age is an error";
    }
    //A child is defined as age at most 12.
    else if (age <= 12)
    {
        cout << " you are a child ";
    }
    //A teen is defined as age at least 13 and at most 17.
    else if (age <= 17)
    {
        cout << " you are a teen ";
    }
    //An adult is defined as age at least 18 and at most 64.
    else if (age <= 64)
    {
        cout << "you are an adult ";
    }
    //A retiree is defined as age at least 65.
    else if (age >= 65)
    {
        cout << "you are a retiree";
    }
    cout << endl;
    return 0;
}
/* SAMPLE OUTPUT
Kristinas-MBP:CS110B kristina$ ./a.out 
Please input your age: -1
a negative age is an error
Kristinas-MBP:CS110B kristina$ ./a.out 
Please input your age: 22
you are an adult 
Kristinas-MBP:CS110B kristina$ ./a.out 
Please input your age: 65
you are a retiree
*/
