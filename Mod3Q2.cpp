// Kristina Helwing
// CS110B
// 020822
// This is a program that converts Fahrenheit to Celsius for Americans ;)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function called toCelsiusByReference, which takes a parameter temperature by reference, and returns a bool
bool toCelsiusByReference(float &temperature)
{
    float celsius = 5.0 / 9.0 * (temperature - 32);
    temperature = celsius;
    return celsius > 0.0;
}
int main()
{   // function that asks the user to input any Fahrenheit temperature
    and then printing out the celsius temperature.float temperature = 0.0;
    cout << "Welcome to the temperature converter!" << endl;
    cout << "Please enter a temperature in Fahrenheit: " << endl;
    cin >> temperature;
    // calling the function to convert
    bool aboveFreezing = toCelsiusByReference(temperature);
    string freezing = aboveFreezing ? "above" : "below";
    cout << setprecision(1) << fixed << "In Celsius the temperature is: " << temperature << endl
         << "This temperature is " << freezing << " freezing" << endl;
}

/* SAMPLE OUTPUT
 Welcome to the temperature converter!
Please enter a temperature in Fahrenheit:
60
In Celsius the temperature is: 15.6
This temperature is above freezing

Welcome to the temperature converter!
Please enter a temperature in Fahrenheit:
25
In Celsius the temperature is: -3.9
This temperature is below freezing
*/
