// This program uses a reference variable as a function parameter.
#include <iostream>
using namespace std;

// Function prototype. The parameter is a reference variable.
void doubleNum(int &refVar);   

int main()
{
	int value = 4;

	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	doubleNum(value);
	cout << "Now back in main, value is " << value << endl;
	return 0;
}

/**************************************************************
 *                         doubleNum                          *
 * This function's parameter is a reference variable. The &   *
 * tells us that. This means it receives a reference to the   *
 * original variable passed to it, rather than a copy of that *
 * variable's data. The statement refVar *= 2 is doubling the *
 * data stored in the value variable defined in main.         *
 **************************************************************/
void doubleNum (int &refVar)
{
	refVar *= 2;
}
