/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Find Logical Error(s)
-----------------------------------------------------------

Modift the program below so that it computes and prints out
the standard deviation of a given data array.

The program allows the user to input the number of elements
(n) in the array "data", then it asks the user to keyin the
data array elements. The main function calls the getSTD 
function to compute STD and return its value.

The program contains some logical errors that prevents it
from producing the correct output. 

Identify and fixt hese errors, so that the program can produce
the sample runs below:

Sample Run 1:

    How many elements ? 7
    Enter 7 elements: 8 7 6 5 4 5 4 5
    8:7:6:5:4:5:4:
    Standard Deviation = 1.82401


Sample Run 2:

    How many elements ? 10
    Enter 10 elements: 8 7 6 5 4 9 8 7 6 7
    8:7:6:5:4:9:8:7:6:7:
    Standard Deviation = 1.41774

-----------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

const int MAXSIZE = 100;

double getSTD(float data[], int sz)
{
    int sum;
    double mean, standardDeviation;
    for(int i = 0; i < sz; ++i)
        sum += data[i];
    mean = sum/10.0;
    for(int i = 0; i < sz; ++i)
        standardDeviation += pow(data[i] - mean, 2);
    return sqrt(standardDeviation / 10);
}

int main()
{
    int i, n;
    float data[10];
    cerr << "How many elements ? ";
    cin >> n;
    cerr << "Enter " << n << " elements: ";
    for(i = 0; i < n; ++i)
        cin >> data[i];

    for(i = 0; i < n; ++i) 
       cout << data[i] << ":";
    cout << endl;
    
    cerr <<"Standard Deviation = " ;
    cout << getSTD(data,n) << endl;

    return 0;
}
