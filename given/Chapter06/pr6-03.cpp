// This program has three functions: main, first, and second.
#include <iostream>
using namespace std;

// Function prototypes
void first();
void second();

/***************************************
 *                 main                *
 ***************************************/
int main()
{
	cout << "I am starting in function main.\n";
	first();	   // Call function first
	second();	   // Call function second
	cout << "Now I am back in function main again.\n";
	return 0;
}

/***************************************
 *                first                *
 * This function displays a message.   *
 ***************************************/
void first()
{
	cout << "I am now inside the function first.\n";
}

/***************************************
 *                second               *
 * This function displays a message.   *
 ***************************************/
void second()
{
	cout << "I am now inside the function second.\n";
}

