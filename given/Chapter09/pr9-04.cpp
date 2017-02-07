// This program uses the bubble sort algorithm 
// to sort an array of integers in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main()
{
	const int SIZE = 6;
   
	// Array of unsorted values
	int values[SIZE] = {7, 2, 3, 8, 9, 1};

	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);
	
	// Sort the values
	sortArray(values, SIZE);
	
	// Display them again
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
	return 0;
}

/************************************************************
 *                        sortArray                         *
 * This function performs an ascending-order bubble sort on *
 * array. The parameter size holds the number of elements   *
 * in the array.                                            *
 ************************************************************/
void sortArray(int array[], int size)
{
	int  temp;
	bool madeAswap;

	do
	{	madeAswap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				madeAswap = true;
			}
		}
   } while (madeAswap);  // Loop again if a swap occurred on this pass.
}

/*************************************************************
 *                        showArray                          *
 * This function displays the contents of array. The         *
 * parameter size holds the number of elements in the array. *
 *************************************************************/
void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}
