// This program calls the displayMessage function from within a loop.
#include <iostream>
using namespace std;

// Function prototype
void displayMessage();

/***************************************
 *                 main                *
 ***************************************/
int main()
{
	cout << "Hello from main.\n\n";
	
	for(int count = 0; count < 3; count++)
	{	displayMessage();       // Call displayMessage
	}
	cout << "\nNow we are back in the main function again.\n";
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
