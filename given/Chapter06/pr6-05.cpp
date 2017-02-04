// This program has two functions, main and displayMessage.
// There is no prototype for displayMessage, so it must be
// placed before the main function in order to be called.
#include <iostream>
using namespace std;

/***************************************
 *           displayMessage            *
 *  This function displays a greeting. *
 ***************************************/
void displayMessage()
{
	cout << "Hello from the displayMessage function.\n";
}

/***************************************
 *                 main                *
 ***************************************/
int main()
{
	cout << "Hello from main.\n";
	displayMessage();       // Call displayMessage
	cout << "Now we are back in the main function again.\n";
	return 0;
}

