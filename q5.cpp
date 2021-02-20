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

The following program reads (n) as the size of the data set
and a symbol (ch) of type char. 

Then (n) integer numbers are keyed in by the user and stored
in the array (arr). 

You are expected to implement the function "displayHistogram"
that produces the results that are exactly shown in the sample 
runs below.

IMPORTANT:
You must count the spaces and lines carefully. Any change in 
the output, no marks will be given.


Sample Run 1:
    Enter size of data: 10
    Enter symbol to use : #
    Enter 6 data elements : 1 2 3 4 5 6 5 4 3 2
    Your input: 1,2,3,4,5,6,5,4,3,2,
    Item   1 --|#
    Item   2 --|##
    Item   3 --|###
    Item   4 --|####
    Item   5 --|#####
    Item   6 --|######
    Item   7 --|#####
    Item   8 --|####
    Item   9 --|###
    Item  10 --|##


Sample Run 2:
    Enter size of data: 6
    Enter symbol to use : @
    Enter 6 data elements : 9 6 3 7 10 15
    Your input: 9,6,3,7,10,15,
    Item   1 --|@@@@@@@@@
    Item   2 --|@@@@@@
    Item   3 --|@@@
    Item   4 --|@@@@@@@
    Item   5 --|@@@@@@@@@@
    Item   6 --|@@@@@@@@@@@@@@@    

---------------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXSIZE = 100;

// -------------------------------------------------------------
//   Implement the displayHistogram below this comment lines
// -------------------------------------------------------------

void displayHistogram(int arr[],int size, char ch)
{
    for (int i=0; i<size;i++)
    {
        cout<<"Item   "<<setw(3)<<i+1<<" --|";
        for (int j =1; j<=arr[i];j++)
            cout<<ch;
        cout<<endl;

    }
   
}



// -------------------------------------------------------------
//  You are not allowed to change anything below these comment
//  lines. Any change will cause you to get 0.
// -------------------------------------------------------------
void readArray(int a[], int size){
    for (int i=0;i<size; i++)
        cin >> a[i];
}
void printArray(int a[], int size){
    for (int i=0;i<size; i++)
        cout << a[i] << ",";
    cout << endl;
}

int main()
{
    int arr[MAXSIZE];
    char ch;
    int size;

    cerr << "Enter size of data: ";
    cin >> size;
    cerr << "Enter symbol to use : ";
    cin >> ch;
    cerr << "Enter " << size << " data elements : ";
    readArray(arr, size);
    cerr << "Your input: ";
    printArray(arr, size);
    displayHistogram(arr, size, ch);

	return 0;
}
