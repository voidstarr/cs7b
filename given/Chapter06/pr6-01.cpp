// This program has two functions, main and displayMessage.
#include <iostream>
using namespace std;

// Function prototype
void displayMessage();

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

/***************************************
 *           displayMessage            *
 *  This function displays a greeting. *
 ***************************************/
void displayMessage()
{
	cout << "Hello from the displayMessage function.\n";
}
