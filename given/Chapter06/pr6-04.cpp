// This program has three functions: main, deep, and deeper.
#include <iostream>
using namespace std;

// Function prototypes
void deep();
void deeper();

/***************************************
 *                 main                *
 ***************************************/
int main()
{
	cout << "I am starting in function main.\n";
	deep();	  // Call function deep
	cout << "Now I am back in function main again.\n";
	return 0;
}

/***************************************
 *                 deep                *
 * This function displays a message.   *
 ***************************************/
void deep()
{
	cout << "I am now inside the function deep.\n";
	deeper();	// Call function deeper
	cout << "Now I am back in deep.\n";
}

/***************************************
 *                deeper               *
 * This function displays a message.   *
 ***************************************/
void deeper()
{
	cout << "I am now inside the function deeper.\n";
}