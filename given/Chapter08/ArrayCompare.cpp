// This program illustrates how to correctly compare two arrays.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arrayA[SIZE] = { 5, 10, 15, 20, 25 };
	int arrayB[SIZE] = { 5, 10, 15, 20, 25 };
	bool arraysEqual = true;  // Flag variable
	int count = 0;            // Loop counter variable

	// Determine whether corresponding array
	// elements contain the same data values
	elements contain the same data
	while (arraysEqual && count < SIZE)
	{	if (arrayA[count] != arrayB[count])
			arraysEqual = false;
		count++;
	}
	// Display the appropriate message
	if (arraysEqual)
		cout << "The arrays are equal.\n";
	else
		cout << "The arrays are not equal.\n";

	return 0;
}
