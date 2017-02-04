// This program demonstrates the vector size member function.
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main()
{
	vector<int> values;

	// Store a series of numbers in the vector
	for (int count = 0; count < 7; count++)
		values.push_back(count * 2);
		
	// Display the numbers
	showValues(values);

	return 0;
}

/*****************************************************************
 *                       showValues                              *
 * This function accepts an int vector as its sole argument, and *
 * displays the value stored in each of the vector's elements.   *
 *****************************************************************/
void showValues(vector<int> vect)
{
	for (int count = 0; count < vect.size(); count++)
		cout << vect[count] << "  ";
   cout << endl;
}
