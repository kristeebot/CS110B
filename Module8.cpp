// KristinaHelwing
// CS110B
// 032122
// This program reverses words and checks for palindromes

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
1.  This function returns the last index where the target char can be found in the string.
it returns -1 if the target char does not appear in the string.
*/
int lastIndexOf(char *s, char target)
{
    int lastIndex = strlen(s) - 1;
    while (lastIndex--)
    {
        char *end = (s + lastIndex);
        if (*end == target)
        {
            return lastIndex;
        }
    }
    return -1;
}

// 2.  This function alters any string that is passed in to be in reverse order.
void reverse(char *s)
{ // starting from opposite ends of the string stepping through to the middle swapping the characters as we go.
    char *tail = s + (strlen(s) - 1);
    while (s < tail)
    {
        char c = *s;
        char t = *tail;
        *s = t;
        *tail = c;
        tail--;
        s++;
    }
}

/*
3. This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.
It also returns the number of replacements that it makes.
If the target char does not appear in the string it returns 0 and does not change the string.
*/

int replace(char *s, char target, char replacementChar)
{
    int replacementCount = 0;
    while (*s)
    {
        if (*s == target)
        {
            *s = replacementChar;
            replacementCount++;
        }
        s++;
    }
    return replacementCount;
}

/*4.  This function returns the index in string s where the substring can first be found.
It should return -1 if the substring does not appear in the string. */

int findSubstring(char *s, char substring[])
{
    int startingIndex = 0;
    char *currentHead = s;
    int currentIndex = 0;
    while (*currentHead)
    {
        int subStringIndex = 0;
        while (substring[subStringIndex])
        {
            if (*(currentHead + subStringIndex) != substring[subStringIndex])
            {
                currentHead++;
                currentIndex++;
                break;
            }
            else
            {
                subStringIndex++;
                if (!substring[subStringIndex])
                {
                    return currentIndex;
                }
            }
        }
    }
    return -1;
}

/*
5. This function returns true if the argument string is a palindrome.
It returns false if it is not.
*/
bool isPalindrome(char *s)
{
    char candidate[MAX_INPUT];
    strncpy(candidate, s, MAX_INPUT);
    reverse(candidate);
    return strcmp(candidate, s) == 0;
}

static const int INPUT_MAX = 128;

int main()
{
    int lastIndexValue = lastIndexOf("Giants", 'a');
    cout << "lastIndexOf (\"Giants\", 'a') " << lastIndexValue << endl;

    char stringToReverse[INPUT_MAX] = "flower";
    reverse(stringToReverse);
    cout << stringToReverse << endl;

    char replaceInput[INPUT_MAX] = "go giants";
    int replacementCount = replace(replaceInput, 'g', 'G');
    cout << "replacementCount: " << replacementCount << " " << replaceInput << endl;

    int foundIndex = findSubstring("Skyscraper", "ysc");
    cout << "findSubstring(\"Skyscraper\", \"ysc\") returned: " << foundIndex << endl;

    cout << "abba is a palindrome: " << isPalindrome("abba") << endl;
    cout << "abc is a palindrome: " << isPalindrome("abc") << endl;

    char wordsToReverse[INPUT_MAX] = "Kristina loves Gavin";
    reverseWords(wordsToReverse);
    cout << wordsToReverse << endl;

    return 0;
}
