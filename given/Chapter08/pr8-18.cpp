// This program demonstrates passing different arrays to a function.
#include <iostream>
using namespace std;

// Declare arrayType to be an alias for an array of ints
typedef int arrayType[];  

void showValues(arrayType, int);  // Function prototype

int main()
{
	const int SIZE1 = 8;
	const int SIZE2 = 5;
	int set1[] = {5, 10, 15, 20, 25, 30, 35, 40};
	int set2[] = {2, 4, 6, 8, 10};

	cout << "Here are the values stored in array set1: ";
	showValues(set1, SIZE1);      // Pass set 1 to showValues
	
	cout << "Here are the values stored in array set2: ";
	showValues(set2, SIZE2);      // Pass set 2 to showValues
	return 0;
}

/*************************************************************
 *                         showValues                        *
 * This function displays the contents of an integer array   *
 * when passed the array's address and its size as arguments.*
 *************************************************************/
void showValues (arrayType nums, int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}
