// KristinaHelwing
// CS110B
// 032122
// This program reverses words and checks for palindromes

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*1.  This function returns the last index where the target char can be found in the string.
it returns -1 if the target char does not appear in the string.
For example, if s is “Giants” and target is ‘a’ the function returns 2. */

int lastIndexOf(char *s, char target)
{
    return -1;
}

/*2.  This function alters any string that is passed in.
It should reverse the string. If “flower” gets passed in it should be reversed in place to “rewolf”.
To be clear, just printing out the string in reverse order is insufficient to receive credit,
you must change the actual string to be in reverse order.*/

void reverse(char *s)
{
}

/*3.  This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.
It also returns the number of replacements that it makes.
If the target char does not appear in the string it returns 0 and does not change the string.
For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’,
the function should change s to “Go Giants” and return 2. */

int replace(char *s, char target, char replacementChar)
{
    return 0;
}

/*4.  This function returns the index in string s where the substring can first be found.
For example if s is “Skyscraper” and substring is “ysc” the function would return 2.
It should return -1 if the substring does not appear in the string. */

int findSubstring(char *s, char substring[])
{
    return -1;
}

/*5. This function returns true if the argument string is a palindrome.
It returns false if it is not.
A palindrome is a string that is spelled the same as its reverse.
For example “abba” is a palindrome. So is “hannah”, “abc cba”, and “radar”.
Note: do not get confused by white space characters. They should not get any special treatment.
“abc ba” is not a palindrome. It is not identical to its reverse. */

bool isPalindrome(char *s)
{
    return false;
}

/*6. Extra Credit, up to 10 extra points.
This function should reverse the words in a string.
A word can be considered to be any characters, including punctuation, separated by spaces
(only spaces, not tabs, \n etc.).  So, for example, if s is “The Giants won the Pennant!”
the function should change s to “Pennant! the won Giants The” */

void reverseWords(char *s)
{
}

/*You can get up to 5 extra credit points if you implement this correctly.
You can get up to another 5 extra credit points if you do it without using a second array.
Note: this is one of the classic coding questions given during programming interviews.



Requirements
- You may use strlen(), strcmp(), and strncpy() if you wish,
but you may NOT use any of the other C-string library functions such as strstr(), strncat(), etc.
- You will not receive credit for solutions which use C++ string objects,
you must use C-Strings (null-terminated arrays of chars) for this assignment.



Submission
Submit a cpp file containing your program and some sample output
which demonstrates all of your functions working correctly and fully,
at minimum with the examples listed above.
This means that you will need to write a simple main() function to call all of your functions and show that they work.
 */

int main()
{
    int lastIndexValue = lastIndexOf("Giants", 'a');
    cout << "lastIndexOf (\"Giants\", 'a') " << lastIndexValue << endl;

    char *stringToReverse = "flower";
    reverse(stringToReverse);
    cout << stringToReverse << endl;

    char *replaceInput = "go giants";
    int replacementCount = replace(replaceInput, 'g', 'G');
    cout << "replacementCount: " << replacementCount << replaceInput << endl;

    int foundIndex = findSubstring("Skyscraper", "ysc");
    cout << "findSubstring(\"Skyscraper\", \"ysc\") returned: " << foundIndex << endl;

    cout << "abba is a palindrome: " << isPalindrome("abba") << endl;
    cout << "abc is a palindrome: " << isPalindrome("abc") << endl;

    char* wordsToReverse = "Kristina loves Gavin";
    reverseWords(wordsToReverse);
    cout << wordsToReverse << endl;

    return 0;
}
