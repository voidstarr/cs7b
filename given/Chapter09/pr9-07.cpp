// This program uses the bubble sort algorithm to sort 
// a vector of integers in ascending order.
#include <iostream>
#include <vector>             // Needed to use vectors
using namespace std;

// Function prototypes
void displayVector(vector<int>);
void sortVector(vector<int> &);

int main()
{
	const int SIZE = 6;
   
	// Create a vector to hold a set of unsorted integers
	vector<int> values(SIZE);
	
	// Prompt the user to enter the values to be stored. 
	cout << "Please enter " << SIZE << " integers separated by spaces.\n";
	
	for (int i = 0; i < SIZE; i++)
	    cin >> values[i];
	 
	// Display the values
	cout << "\nThe unsorted values entered are:\n";
	displayVector(values);
	
	// Sort the values
	sortVector(values);
	
	// Display them again
	cout << "The sorted values are:\n";
	displayVector(values);
	return 0;
}

/**************************************************
 *                  sortVector                    *
 * This function performs an ascending-order      *
 * bubble sort on numbers, a vector of integers.  *
 **************************************************/
void sortVector(vector<int> &numbers)
{	int  temp;
	bool swap;

	do
	{	swap = false;
		for (unsigned count = 0; count < numbers.size()-1; count++)
		{
			if (numbers[count] > numbers[count + 1])
			{
				temp = numbers[count];
				numbers[count] = numbers[count + 1];
				numbers[count + 1] = temp;
				swap = true;
			}
		}
   } while (swap);
}

/***************************************************
 *                   displayVector                 *     
 *                                                 *
 * This function displays the contents of numbers, *
 * a vector of integers.                           *
 ***************************************************/
void displayVector(vector<int> numbers)
{
	for (unsigned count = 0; count < numbers.size(); count++)
		cout << numbers[count] << " ";
	cout << endl;
}
