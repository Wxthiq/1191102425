/* 

Multimedia University
Faculty of Computing and Informatics
Trimester 2020
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write program
-----------------------------------------------------------

	The following program is missing a printClass function.
	The function generates a table out of 4 parallel arrays
	used in the program below.

	You can get information about the format through sample 
	runs and the call statement for the function in the main
	(parameters and their types).

	Your output has to be exact otherwise 0 will be given. 
	
	HINT: Count the dashes in the sample runs to understand
	      the details of the output table.

    Sample Run 1:

        Enter the size of the class : 3
		3
		class size = 3
		Enter the class information: 
		name, math, physics, chemistry : 
		Lynne 1 3 3
		Sharaf 5 4 4 
		Salah 8 7 7 
		|-------------------------------------------|
		|                Class List                 |
		|----------+----------+----------+----------|
		|     Lynne|         1|         3|         3|
		|    Sharaf|         5|         4|         4|
		|     Salah|         8|         7|         7|
		|----------+----------+----------+----------|

    Sample Run 2:

	Enter the size of the class : 5
	5
	class size = 5
	Enter the class information: 
	name, math, physics, chemistry : 
	aaa 87 65 76
	bbbb 90 98 97
	cc 88 77 55
	www 90 76 54
	eee 66 55 77
	|-------------------------------------------|
	|                Class List                 |
	|----------+----------+----------+----------|
	|       aaa|        87|        65|        76|
	|      bbbb|        90|        98|        97|
	|        cc|        88|        77|        55|
	|       www|        90|        76|        54|
	|       eee|        66|        55|        77|
	|----------+----------+----------+----------|

---------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// --------------------------------------------------------------------
//  Your implementation for the printClass function comes after
//  this comment block. 
// --------------------------------------------------------------------
void printClass(vector<string> name, vector<int> Math,vector<int> Physics,vector<int> Chemistry)
{
	cout<<"|-------------------------------------------|"<<endl;
	cout<<"|                Class List                 |"<<endl;
	cout<<"|----------+----------+----------+----------|"<<endl;
	int length = name.size();
	for (int i =0; i<length;i++)
	{
		cout<<"|"<<setw(10)<<name[i]<<"|"<<setw(10)<<Math[i]<<"|"<<setw(10)<<Physics[i]<<"|"<<setw(10)<<Chemistry[i]<<"|"<<endl;
	}
	cout<<"|----------+----------+----------+----------|"<<endl;

}

// --------------------------------------------------------------------
//  Do not modify all the lines below until the end of the program. 
//  Any change to them, you will be given the grade 0 for this question.
// --------------------------------------------------------------------

void readArray(vector<string> &name, vector<int> &m, 
			    vector<int> &p, vector<int> &c)
{
	cerr << "class size = " << name.size() << endl;
	cerr << "Enter the class information: " << endl;
	cerr << "name, math, physics, chemistry : " << endl;
	for (int i=0; i<name.size(); i++){	
		cin >> name[i] >> m[i] >> p[i] >> c[i];
	}
}

int main() 
{   
	vector<string> name;
	vector<int> Math, Physics, Chemistry;

	short size;
	cerr << "Enter the size of the class : ";
	cin >> size;
	cout << size << endl;
	name.resize(size);
	Math.resize(size);
	Physics.resize(size);
	Chemistry.resize(size);
	
	readArray(name, Math, Physics, Chemistry);
	printClass(name, Math, Physics, Chemistry);

	return 0;
}
