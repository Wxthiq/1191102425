/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a function definition
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

Implement the function MinRow that is called from the main
function. The function returns the index of the row that 
has the minimum total of its elements.

Hint: find the total of each row and find the minimum 
      total, then return the index.

The sample runs are as follows.

Sample Run 1:

Enter rows and columns of the array: 4 4
4:4

1 1 1 1
2 1 1 1
0 1 1 1
2 2 2 1
1:1:1:1:
2:1:1:1:
0:1:1:1:
2:2:2:1:
Row with min total is 2
   

Sample Run 2:

Enter rows and columns of the array: 3 3
3:3

0 1 0
1 1 0
2 2 2
0:1:0:
1:1:0:
2:2:2:
Row with min total is 0

----------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;
const int MAXR = 100;
const int MAXC = 100;

//--------------------------------------------------------------------
//                  Write your code starting after this line                        
//--------------------------------------------------------------------








//----------------------------------------------------------------------
// You are not allowed to change any of the lines below this 
// comment
//----------------------------------------------------------------------

void PrintArray(int a[][MAXC], int r, int c){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            cout << a[i][j] << ":";
        cout << endl;
    }
}
void ReadArray(int a[][MAXC], int r, int c){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            cin >> a[i][j];
    }
}
int main()
{
    int r,c;
    int arr[MAXR][MAXC];
    cerr << "Enter rows and columns of the array: ";
    cin >> r >> c;
    cerr << r << ":" << c << endl;
    cerr << endl;
    ReadArray(arr,r,c);
    PrintArray(arr,r,c);
    cout << "Row with min total is " << MinRow(arr,r,c) << endl;
	return 0;
}
