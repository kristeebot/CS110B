// Kristina Helwing
// CS110B
// Date: 02/07/22
// This program is a Blackjack Game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// truncating random number in a global constant
const unsigned int MIN_CARD_VALUE = 0;
const unsigned int MAX_CARD_VALUE = 10;
unsigned int getRandomCard()
{
    return (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
}

int main()
{

    // seed the random number generator form the current time
    unsigned int currentTime = time(0);
    srand(currentTime);
    bool playAgain = true;
    while (playAgain)
    {

        // generate two random cards
        unsigned int cardOne = getRandomCard();
        unsigned int cardTwo = getRandomCard();
        cout << "Welcome to the Blackjack table, your cards are:  " << cardOne << ", " << cardTwo << endl;

        // Next add a variable to store the total, and a statement to show its value:
        string userInput = "";
        unsigned int cardTotal = cardOne + cardTwo;
        bool keepGoing = true;

        while (keepGoing)
        {

            cout << "Your current cards equal: " << cardTotal << endl
                 << "Would you like another card? (y/n)" << endl;
            cin >> userInput;
            if (userInput == "y")
            {
                unsigned int nextCard = getRandomCard();
                cardTotal += nextCard;
                cout << "Your card is: " << nextCard << endl;
                if (cardTotal > 21)
                {
                    cout << "You Bust!" << endl;
                    keepGoing = false;
                }
                else if (cardTotal == 21)
                {
                    cout << "You win!" << endl;
                    keepGoing = false;
                }
            }
            else
            {
                keepGoing = false;
            }
        }
        cout << "Would you like to  play another game?: (y/n) " << endl;
        cin >> userInput;
        if (userInput != "y")
        {
            playAgain = false;
        }
    }
}
/* SAMPLE OUTPUT
Welcome to the Blackjack table, your cards are:  1, 10
Your current cards equal: 11
Would you like another card? (y/n)
y
Your card is: 10
You win!
Would you like to  play another game?: (y/n) 
y
Welcome to the Blackjack table, your cards are:  1, 7
Your current cards equal: 8
Would you like another card? (y/n)
y
Your card is: 7
Your current cards equal: 15
Would you like another card? (y/n)
y
Your card is: 6
You win!
Would you like to  play another game?: (y/n) 
y
Welcome to the Blackjack table, your cards are:  5, 6
Your current cards equal: 11
Would you like another card? (y/n)
y
Your card is: 7
Your current cards equal: 18
Would you like another card? (y/n)
u
Would you like to  play another game?: (y/n) */