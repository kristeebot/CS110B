// Question 2
// 01 - Graded Discussion
// Kristina Helwing, CS110B

#include <iostream>
using namespace std;

int main()
{
//   Output a statement to ask the user to input the score for the home team today, and store the user's response in a variable homeScore of type int
int HomeScore = 0;
cout << "What is the home team's score? "; 
cin >> HomeScore;
// Output a statement to ask the user to input the score for the visitor team today, and store the user's response in a variable visitorScore of type int
int VisitorScore = 0;
cout << "What is the visitor team score? ";
cin >> VisitorScore;
// Display the scores, and tell the user who won the game
string winner = HomeScore == VisitorScore ? "The game was tied" :  HomeScore > VisitorScore ? "Home team wins" : "Visitor wins";
cout << "Home team " << HomeScore << " Visitor team " << VisitorScore << " " << endl << winner << endl;
// Also, tell the user if any of the following happened:
// One of the teams had a low score (<3)
// Both of the teams had a low score
// Use a const int for a low score instead of the magic number of 3
const int LOW_SCORE = 3;
if (VisitorScore < LOW_SCORE && HomeScore < LOW_SCORE)
{
    cout << "Both teams had a low score " << endl;
}
else if (VisitorScore < LOW_SCORE)
{
    cout << "Visitors had a low score " << endl;
}
else if (HomeScore < LOW_SCORE)
{
    cout << "Home team had a low score " << endl;
}

 return 0;
}

