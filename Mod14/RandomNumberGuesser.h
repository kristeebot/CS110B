
#ifndef RANDOMNUMBERGUESSER_H
#define RANDOMNUMBERGUESSER_H
#include <cstdlib>
#include <ctime>
#include "NumberGuesser.h"

unsigned int getRandomMidpoint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

class RandomNumberGuesser : public NumberGuesser
{
public:
    RandomNumberGuesser(int l, int h) : NumberGuesser(l, h)
    {
        unsigned int currentTime = time(0);
        srand(currentTime);
        updateCurrentGuess();
    }

    virtual int getCurrentGuess()
    {
        return currentGuess;
    }
    virtual void higher()
    {
        low += 1;
        updateCurrentGuess();
    }
    virtual void lower()
    {
        high -= 1;
        updateCurrentGuess();
    }

private:
    int currentGuess;
    void updateCurrentGuess()
    {
        // change cuurentGuess to a random number between low and high
        currentGuess = getRandomMidpoint(low, high);
    };
};

#endif // RANDOMNUMBERGUESSER_H