/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Practical Test

-----------------------------------------------------------
Question Type : C++ expressions
-----------------------------------------------------------


    Given the following equation, complete the getP function
    to return a correct value of P given the values r,n, and 
    F as inputs.
            
                     r             1      
       P = F . ------------- . ------------- 
                     n                  n    
                (1+r)  - 1      (1  +  r   ) 

The sample runs are as follows.

Sample Run 1:

Enter a value for r, n, F: 0.5 5 0.5
0.5::5:0.5
P = 0.0367658

Sample Run 2:

Enter a value for r, n, F: 0.5 8 10
0.5::8:10
P = 0.202224

*/

#include <iostream>
#include <cmath>
using namespace std;

//--------------------------------------------------
// Your implementation must be inserted into the
// following function getP
//--------------------------------------------------

double getP(double r, int n, double F)
{  
   double p = F* ((r)/(pow(1+r,n)-1)) * (1/(1+pow(r,n)));
    return p;
   
}

//--------------------------------------------------
// IMPORTANT:
// You are not allowed to modify anything below this line
//
//--------------------------------------------------

int main()
{
    double P, r, F;
    int n;

    cerr << "Enter a value for r, n, F: ";
    cin >> r >> n >> F;
    cout << r << ":" << ":" << n << ":" << F << endl;

    cout << "P = " << getP(r,n,F) << endl;

	return 0;
}
