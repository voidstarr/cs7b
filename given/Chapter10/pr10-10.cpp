// This program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of 
// pointers.
#include <iostream>
using namespace std; 

int main()
{
   const int SIZE = 8;
	int set[ ] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *numPtr = set;        // Make numPtr point to set

	cout << "The numbers in set are:\n";
	cout << *numPtr << " ";   // Display first element
	while (numPtr < &set[SIZE-1])
	{
	    // Advance numPtr to the next element
		numPtr++;
		// Display the value pointed to by numPtr
		cout << *numPtr << " ";
	}
	
	// Display the numbers in reverse order
	cout << "\nThe numbers in set backwards are:\n";
	cout << *numPtr << " "; // Display last element
	while (numPtr > set)
	{
	    // Move backward to the previous element
	    numPtr--;
	    // Display the value pointed to by numPtr
		cout << *numPtr << " ";
	}
	return 0;
}