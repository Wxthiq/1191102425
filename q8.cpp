/*  
Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Convert the flowchart (q8.jpg) into a C++ program.

Sample Run 1:
=============
4
1 1
1:1:1
22 2
2:22:2
65 78
78:65:13
22 44
44:22:22

Sample Run 2:
=============
6
76 26
26:76:2
87 64
64:87:1
90 70
70:90:10
76 54
54:76:2
98 89
89:98:1
44 14
14:44:2

---------------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

//--------------------------------------------------
// Don't display any additional mesaages which are
// not found in the flowchart and the sample runs. 
//--------------------------------------------------

int main() 
{
   int K;
   cin>> K;
   int i =0;
   

   
   int N,M,T;
   int MM,NN;
   while (i<K)
   {
      cin>>N>>M;
      MM=M;
      NN=N;
      while (N!=0)
      {
         T=N;
         N=M%N;
         M=T;
      }
      cout <<MM<<":"<<NN<<":"<<M<<endl;
      i=i+1;
   }


   return 0;
}
