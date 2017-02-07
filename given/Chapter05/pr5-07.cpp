// This program displays integer numbers and their squares, beginning
// with one and ending with whatever number the user requests.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num,        // Counter telling what number to square
	    lastNum;    // The final integer value to be squared

	// Get and validate the last number in the table
	cout << "This program will display a table of integer\n"
	     << "numbers and their squares, starting with 1.\n"
		 << "What should the last number be?\n"
		 << "Enter an integer between 2 and 10: ";		  
	cin  >> lastNum;
	
	while ((lastNum < 2) || (lastNum > 10))
	{  cout << "Please enter an integer between 2 and 10: ";
	   cin  >> lastNum;
	} 
	// Display the table
	cout << "\nNumber  Square\n";
	cout << "--------------\n";	
	
	num = 1;          // Set the counter to the starting value
	while (num <= lastNum)
	{
	   cout << setw(4) << num  << setw(7) << (num * num) << endl;
	   num++;        // Increment the counter
	}
	return 0;
}
