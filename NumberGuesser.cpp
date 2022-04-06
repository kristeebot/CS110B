// KristinaHelwing
// CS110B
// This program guesses what number you are thinking of

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const unsigned int MIN_GUESS = 0;
const unsigned int MAX_GUESS = 100;
unsigned int getRandomMidpoint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
int getMidpoint(int low, int high)
{
    return (high - low) / 2 + low;
}

void playOneGame()
{
    cout << "Think of a number between 1 and 100." << endl;
    char userResponse = ' ';
    int myMin = MIN_GUESS;
    int myMax = MAX_GUESS;
    int myGuess = getMidpoint(myMin, myMax);
    while (userResponse != 'c')
    {
        cout << "Is it " << myGuess << "? (h/l/c)";
        cin >> userResponse;
        if (userResponse == 'h')
        {
            myMin = myGuess + 1;
        }
        else if (userResponse == 'l')
        {
            myMax = myGuess - 1;
        }
        myGuess = getRandomMidpoint(myMin, myMax);
    }
}
// The shouldPlayAgain() function has a bool return type.
// It prompts the user to determine if the user wants to play again,
// reads in a character, returns true if the character is a ‘y’, and otherwise returns false.
bool shouldPlayAgain()
{
    cout << "Great! Do you want to play again (y/n):  ";
    char userResponse;
    cin >> userResponse;
    return userResponse == 'y';
}
char getUserResponsetoGuess(int guess)
{
    cout << "Is it " << guess << "?(h/l/c): " << endl;
    char userResponse;
    cin >> userResponse;
    return userResponse;
}

int main()
{
    unsigned int currentTime = time(0);
    srand(currentTime);

    do
    {
        playOneGame();
    } while (shouldPlayAgain());

    return 0;
}
/* SAMPLE OUTPUT
Think of a number between 1 and 100.
Is it 50? (h/l/c)l
Is it 30? (h/l/c)h
Is it 43? (h/l/c)c
Great! Do you want to play again (y/n):   */