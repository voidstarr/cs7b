// This program shows that a global variable is visible to all functions
// that appear in a program after the variable's definition.
#include <iostream>
using namespace std;

void anotherFunction();    // Function prototype
int num = 2;               // Global variable

int main()
{
	cout << "In main, num is " << num << endl;
	anotherFunction();
	cout << "Back in main, num is " << num << endl;
	return 0;
}

/***************************************************************
 *                      anotherFunction                        *
 * This function changes the value of the global variable num. *
 ***************************************************************/
void anotherFunction()
{
	cout << "In anotherFunction, num is " << num << endl;
	num = 50;
	cout << "But, it is now changed to " << num << endl;
}
