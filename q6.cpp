/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

Write a program that asks to enter number (n) of marks, then 
key in those (n) marks. Write 2 functions to perform  the 
following tasks:

1. getGrade that will receive a mark and return the grade
   based on the following table.

       mark       grade
       90-100      A
       80-89       B
       70-79       C
       60-69       D
       0-59        F

2. "print" function that will receive three parameters as
   shown in the call statement in the main function. The 
   function will print the grade obtained for the mark 
   based on the mark value as can be seen in the sample
   runs below. 


The sample runs are as follows.


Sample Run 1:

Enter n: 5
5
56 87 65 98 73

FFFFF
BBBBBBBB
DDDDDD
AAAAAAAAA
CCCCCCC


Sample Run 2:

Enter n: 8
8
78 70 98 65 45 75 87 91

CCCCCCC
CCCCCCC
AAAAAAAAA
DDDDDD
FFFF
CCCCCCC
BBBBBBBB
AAAAAAAAA

-----------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

//--------------------------------------------------
// Write your imp-lementation for the function
// getGrade below this line only.
// -------------------------------------------------
int getGrade(int mark)
{
    char grade;
    if (mark >=90)
        grade = 'A';

    else if (mark >=80)
        grade ='B';

    else if (mark >=70)
        grade ='C';

    else if (mark >=60)
        grade ='D';
    else
        grade ='F';
    
    return grade;
}



//--------------------------------------------------
// Write your implemention for the function print here.
// use cout not cerr to print the data
// ----------------------------------------------------
void print (int mark[], char grade[], int n)
{
     int counter;

    for (int i=0;i<5;i++)
    {
        if (grade[i]=='A')
            counter =9;
        else if (grade[i]=='B')
            counter=8;
        else if (grade[i]=='C')
            counter=7;
        else if(grade[i] =='D')
            counter=6;
        else if(grade[i] =='F')
            counter=5;
        
        for (int j=0;j<counter;j++)
            cout<<grade[i];
        cout<<endl;
    }
}



// ---------------------------------------------------
// IMPORTANT: You are not allowed to change anything
// below this line. Any change will cause you to get 
// 0 for the question.
// ---------------------------------------------------
int main()
{
    int mark[100];
    char grade[100];
    int n;
    cerr << "Enter n: ";
    cin >> n;
    cout << n << endl << endl;
    for (int i=0;i<n;i++)
    {
        cin >> mark[i];
        grade[i] = getGrade(mark[i]);
    }

    print(mark,grade,n);
    
    return 0;
}