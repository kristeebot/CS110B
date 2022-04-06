// KristinaHelwing
// CS110B
// This program evaluates and categorizes poker hands

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

bool containsPair(int hand[]);
bool containsTwoPair(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int hand[]);
bool containsFourOfaKind(int hand[]);

const int HAND_SIZE = 5;
int cardNumber = 0;

int main()
{
    int onePairHand[] = {2, 5, 3, 2, 9};

    if (!containsPair(onePairHand))
    {
        cout << "failed expected Pair!" << endl;
    }
    int twoPairHand[] = {2, 5, 3, 2, 5};

    if (!containsTwoPair(twoPairHand))
    {
        cout << "failed expected Two Pair!" << endl;
    }
    if (containsTwoPair(onePairHand))
    {
        cout << "failed expected Two Pair!" << endl;
    }
    if (containsThreeOfaKind(onePairHand))
    {
        cout << "found three of a kind when not there!" << endl;
    }
    int threeOfaKindHand[] = {5, 2, 2, 3, 2};
    if (!containsThreeOfaKind(threeOfaKindHand))
    {
        cout << "expected three of a kind" << endl;
    }
    int straightHand[] = {6, 3, 4, 5, 2};
    if (!containsStraight(straightHand))
    {
        cout << "expected straight hand" << endl;
    }
    int nonStraightHand[] = {6, 6, 4, 5, 2};
    if (containsStraight(nonStraightHand))
    {
        cout << "fail this is not a straight hand" << endl;
    }
    int fullHouse[] = {6, 6, 4, 4, 4};
    if (!containsFullHouse(fullHouse))
    {
        cout << "fail expected a full house" << endl;
    }
    if (containsFullHouse(threeOfaKindHand))
    {
        cout << "incorrectly detected full house when only three of a kind" << endl;
    }

    int hand[HAND_SIZE] = {0, 0, 0, 0, 0};

    cout << "Enter five numeric cards, no face cards. Use 2 - 9" << endl;
    for (int i = 0; i < HAND_SIZE; i++)
    {
        cout << "Card " << i + 1 << ": ";
        int currentValue = 0;
        cin >> currentValue;
        hand[i] = currentValue;
    }
    if (containsFourOfaKind(hand))
    {
        cout <<"Four of a kind";
    }
    else if (containsFullHouse(hand))
    {
        cout << "Full House";
    }
    else if (containsStraight(hand))
    {
        cout <<"Straight";
    }
    else if (containsThreeOfaKind(hand))
    {
        cout << "Three of a kind";
    }
    else if (containsTwoPair(hand))
    {
        cout << "Two pair";
    }
    else if (containsPair(hand))
    {
        cout << "Pair";
    }
    else 
    {
        cout << "High Card";
    }
}
bool containsPair(int hand[])
{
    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        for (int j = i + 1; j < HAND_SIZE; j++)
        {
            if (hand[j] == currentValue)
            {
                return true;
            }
        }
    }
    return false;
}
bool containsTwoPair(int hand[])
{
    int pairCount = 0;

    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        for (int k = i + 1; k < HAND_SIZE; k++)
        {
            if (currentValue == hand[k])
            {
                pairCount += 1;
                break;
            }
        }
    }
    return pairCount == 2;
}
bool containsThreeOfaKind(int hand[])
{
    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        int count = 1;
        for (int j = i + 1; j < HAND_SIZE; j++)
        {
            if (hand[j] == currentValue)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool containsFourOfaKind(int hand[])
{
    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        int count = 1;
        for (int j = i + 1; j < HAND_SIZE; j++)
        {
            if (hand[j] == currentValue)
            {
                count++;
                if (count == 4)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool containsStraight(int hand[])
{
    sort(hand, hand + HAND_SIZE);
    int lastValue = 0;
    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        if (lastValue > 0 && currentValue - lastValue > 1)
        {
            return false;
        }
        lastValue = currentValue;
    }
    return true;
}

bool containsFullHouse(int hand[])
{
    int aVal = 0;
    int bVal = 0;
    int aCount = 0;
    int bCount = 0;
    for (int i = 0; i < HAND_SIZE; i++)
    {
        int currentValue = hand[i];
        if (aVal == 0)
        {
            aVal = currentValue;
            aCount++;
        }
        else if (aVal == currentValue)
        {
            aCount++;
        }
        else if (bVal == 0)
        {
            bVal = currentValue;
            bCount++;
        }
        else if (bVal == currentValue)
        {
            bCount++;
        }
        else
        {
            return false;
        }
    }
    return aCount + bCount == HAND_SIZE;
}
/*SAMPLE OUTPUT
Enter five numeric cards, no face cards. Use 2 - 9
Card 1: 5
Card 2: 5
Card 3: 3
Card 4: 3
Card 5: 2
Two pair
*/