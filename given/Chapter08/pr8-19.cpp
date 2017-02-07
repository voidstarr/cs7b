// This program uses a function to double the value of
// each element of an array. 
#include <iostream>
using namespace std;

// Declare arrayType to be an alias for an array of ints
typedef int arrayType[]; 
    
// Function prototypes
void doubleArray(arrayType, int);	
void showValues (arrayType, int);	

int main()
{
	const int ARRAY_SIZE = 7;
   arrayType set = {1, 2, 3, 4, 5, 6, 7};

	// Display the original values
   cout << "The arrays values are:\n";
	showValues(set, ARRAY_SIZE);

	// Double the values in the array
	doubleArray(set, ARRAY_SIZE);

	// Display the new values
   cout << "\nAfter calling doubleArray, the values are:\n";
	showValues(set, ARRAY_SIZE);
	cout << endl;
	return 0;
}

/***************************************************
 *                    doubleArray                  *
 * This function doubles the value of each element *
 * in the array whose address is passed to it.     *
 ***************************************************/
void doubleArray(arrayType nums, int size)
{
	for (int index = 0; index < size; index++)
		nums[index] *= 2;
}

/*********************************************************
 *                         showValues                    *
 * This function displays the contents of an int array   *
 * when passed the array's address and size as arguments.*
 *********************************************************/
void showValues (arrayType nums, int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}
