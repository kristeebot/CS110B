#include "RandomNumberGuesser.h"
#include "NumberGuesser.h"
#include <iostream>
using namespace std;


int main()
{
NumberGuesser *ng = new RandomNumberGuesser(1, 10);

// picks a random number between 1 and 10, let’s say it is 3, and outputs it.
cout << ng->getCurrentGuess() << endl; 

// this line prints out 3 again, because it is still the current guess
cout << ng->getCurrentGuess() << endl; 

// this line changes low to 4 because we now know the number is higher than 3. 
// high remains unchanged at 10.
ng->higher();

// this line picks a random number between 4 and 10 and prints it out, 
// let’s say it is 9
cout << ng->getCurrentGuess() << endl;

// this line prints out 9 again, because it is still the current guess
cout << ng->getCurrentGuess() << endl;

delete ng;
ng = NULL;
return 0;
}