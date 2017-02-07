// This program shows that variables defined in a function
// are hidden from other functions. 
#include <iostream>
using namespace std;

void anotherFunction();  // Function prototype

int main()
{
	int num = 1;         // Local variable

	cout << "In main, num is " << num << endl;
	anotherFunction();
	cout << "Back in main, num is still " << num << endl;
	return 0;
}

/***************************************************************
 *                     anotherFunction                         *
 * This function displays the value of its local variable num. *
 ***************************************************************/
void anotherFunction()
{
	int num = 20;        // Local variable

	cout << "In anotherFunction, num is " << num << endl;
}
