// This program uses 2 functions: a void function with a reference 
// variable as a parameter, and a value-returning function.
#include <iostream>
using namespace std;

// Function prototypes
void getNum(int &);   
int doubleNum(int);

int main()
{
	int value;

	// Call getNum to get a number and store it in value
	getNum(value);
	
    // Call doubleNum, passing it the number stored in value
    // Assign value the number returned by the function
	value = doubleNum(value);
	
	// Display the resulting number
	cout << "That value doubled is " << value << endl;
	return 0;
}

/**********************************************************
 *                         getNum                         *
 * This function stores user input data in main's value   *
 * variable by using a reference variable as a parameter. *				
 *********************************************************/
void getNum(int &userNum)
{
	cout << "Enter a number: ";
	cin  >> userNum;
}

/***********************************************************
 *                        doubleNum                        *
 * This function doubles the number it receives as an      *
 * argument and returns it to main thru a return statement.*
 ***********************************************************/
int doubleNum (int number)
{
	return number * 2;
}
