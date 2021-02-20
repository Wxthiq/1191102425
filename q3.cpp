/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Practical Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

The program prompts the user to input a non-zero 
positive integer, then prints out the patterns shown 
in the sample runs below.

You must use repetition structure such as for-loop or 
while-loop. 

The sample runs are as follows.

Sample Run 1:

Key in an integer +ve value: 7
7
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
  1  2  3  4  5  6
  1  2  3  4  5  6  7


Sample Run 2:

Key in an integer +ve value: 15
15
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
  1  2  3  4  5  6
  1  2  3  4  5  6  7
  1  2  3  4  5  6  7  8
  1  2  3  4  5  6  7  8  9
  1  2  3  4  5  6  7  8  9 10
  1  2  3  4  5  6  7  8  9 10 11
  1  2  3  4  5  6  7  8  9 10 11 12
  1  2  3  4  5  6  7  8  9 10 11 12 13
  1  2  3  4  5  6  7  8  9 10 11 12 13 14
  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15

---------------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

//-------------------------------------------------
// write your function drawPattern below this line
//-------------------------------------------------

void drawPattern (unsigned int n)
{
  for (int i =0; i<=n;i++)
  {
    for (int j=1; j<=i;j++)
    {
      cout<<j<<"  ";
    }
    cout<<endl;
  }
}




//-------------------------------------------------
// your code ends here.
//-------------------------------------------------

//IMPORTANT:
// Don't modify anything below this line.
// any changes to the lines below will cause
// you to loose the mark for the question

int main()
{
    unsigned int n;
    cerr << "Key in an integer +ve value: ";
    cin >> n;
    cout << n << endl;
    drawPattern(n);
	return 0;
}

