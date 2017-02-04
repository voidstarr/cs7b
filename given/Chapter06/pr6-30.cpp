// This program shows how the exit function causes a program
// to stop executing.
#include <iostream>
#include <cstdlib>	   // Needed to use the exit function
using namespace std;

// Function prototype
void someFunction();  

int main()
{
	someFunction();
	return 0;
}

/****************************************************************
 *                          someFunction                        *
 * This function demonstrates that exit() can be used to end    *
 * a program from a function other than main. This is not       *
 * considered good programming practice and should normally     *
 * be done only to signal that an error condition has occurred. *
 ****************************************************************/
void someFunction()
{
	cout << "This program terminates with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}
