// This program illustrates how to copy one array to another.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 6;
	int arrayA[SIZE] = {10, 20, 30, 40, 50, 60};
	int arrayB[SIZE] = { 2,  4,  6,  8, 10, 12};
	
	// Copy the elements of arrayB to arrayA one-by-one
	for (int index = 0; index < SIZE; index++)
	   arrayA[index] = arrayB[index];
		
	// Display the contents of the two arrays
	cout << "ArrayB still holds the values:    ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayB[index] << "  ";
		
	cout << "\nArrayA now also holds the values: ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayA[index] << "  ";
	
	cout << endl;
	return 0;
}
