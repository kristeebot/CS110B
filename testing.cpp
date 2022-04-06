#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
#include <unistd.h>

void a(){}

void timer(int num)
{
  for (int minutes = num; minutes > 0; minutes--)
  {
    for (int seconds = 59; seconds >= 0; seconds--)
    {
      cout << minutes << ":" << seconds << endl;
      sleep(1);
    }
  }
}

int main()
{
  timer(2);
  return 0;
}

/*
int countYs(const char array[], int size)
{
  int numY = 0;
  for (int i = 0; i < size; i++)
  {
    if (array[i] == 'y')
    {
      numY++;
    }
  }
  return numY;
}

int main()
{
  cout << countYs("yybc", 4) << endl;
}
*/
