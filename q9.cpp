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

Prompt the user to input vector size and input vector data,
then output the vector data so that all the vowels are capitalized.
Implement the function "MakeBigVowel" which is called by the main
function to do the required task.

Vowels are (a,e,i,o,u)

The sample runs are as follows.


Sample Run 1:

    Input vector size => 10
    Input vector data => thetestdata
    Vowels Capitalized : t h E t E s t d A t 


Sample Run 2:

    Input vector size => 10
    Input vector data => eastis west
    Vowels Capitalized : E A s t I s w E s t    

---------------------------------------------------------------*/
#include <iostream>
#include <vector>
using namespace std;

// ------------------------------------------------------------
// Write your implementation for the MakeBigVowel function below
// this line.
// ------------------------------------------------------------

void MakeBigVowel (vector<char> &v)
{
    int length = v.size();

    for (int i=0;i<length;i++)
    {
        if (v[i] == 'a')
            v[i]=toupper(v[i]);
        
        if (v[i] == 'e')
            v[i]=toupper(v[i]);

        if (v[i] == 'i')
            v[i]=toupper(v[i]);

        if (v[i] == 'o')
            v[i]=toupper(v[i]);

        if (v[i] == 'u')
            v[i]=toupper(v[i]);

    }
    
}

// ------------------------------------------------------------
// Do not modify any of the code below. Any attempt 
// to modify the code below will cause you to get 
// 0 for the question.
// ------------------------------------------------------------

void print(vector<char> &c)
{
    cout << "Vowels Capitalized : ";
    for (auto e: c)
        cout << e << " ";
    cout << endl;
}

void input(vector<char> &v, int size){
    char ch;
    cout << "Input vector data => ";
    for (int i=0;i<size;i++)
    {
        cin >> ch;
        v.push_back(ch);
    }
}

int main()
{
    vector<char>  v;
    char ch;
    int size;
    cerr << "Input vector size => ";
    cin >> size;
    input(v,size);
    MakeBigVowel(v);     // implement this function above
    print(v);
	return 0;
}