/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Practical Test

-----------------------------------------------------------
Question Type : Syntax Errors
-----------------------------------------------------------

The following program checks whether an input integre number 
is a prime number or not. The program contains a number of 
syntax errors. Identify and correct the syntax errors so that
the program will generate the following sample runs.

The sample runs are as follows.

Sample Run 1:

Enter a positive integer: 71
71
71 is a prime number


Sample Run 2:

Enter a positive integer: 111
111
111 is not a prime number

----------------------------------------------------------*/


#include <iostream>
using namespace std;

// IMPORTANT:
// 1. Fix the syntax errors only.
// 2. Don't replace the code with new code to do the task.
// 4. Dont alter the input and output lines in the 
//    program. Any change in the output will be considered
//    illegal and will cause yoou to get 0.

bool isprime(long n)
{
    bool flag = true;
    if (n == 0 || n == 1) {
        flag = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main() 
{
    int i, n;

    cerr << "Enter a positive integer: ";
    cin >> n;
    cout << n << endl;
    
    if (isprime(n))
        cout << n << " is a prime number\n";
    else
        cout << n << " is not a prime number\n";

    return 0;
}