// This program tests a function comparing the contents of two arrays.
#include <iostream>
using namespace std;

// Function prototype
bool testPIN(const int set1[], const int set2[], int size);

int main()
{
	const int NUM_DIGITS = 4;
	int pin1[NUM_DIGITS] = {2, 4, 1, 8};  // Base set of values
	
	int pin2[NUM_DIGITS] = {2, 4, 6, 8};  // One element is 
	                                      // different from PIN1.
	int pin3[NUM_DIGITS] = {1, 2, 3, 4};  // All elements are 
	                                      // different from PIN1.
	if (testPIN(pin1, pin2, NUM_DIGITS))
		cout << "ERROR: pin1 and pin2 are reported to be the same.\n";
	else
		cout << "SUCCESS: pin1 and pin2 are correctly identified "
		     << "as different.\n";
	
	if (testPIN(pin1, pin3, NUM_DIGITS))
		cout << "ERROR: pin1 and pin3 are reported to be the same.\n";
	else
		cout << "SUCCESS: pin1 and pin3 are correctly identified "
		     << "as different.\n";

	if (testPIN(pin1, pin1, NUM_DIGITS))
		cout << "SUCCESS: pin1 and pin1 are correctly reported "
		     << "to be the same.\n";
	else
		cout << "ERROR: pin1 and pin1 are erroneously identified "
		     << "as different.\n";
	return 0;
}

/*********************************************************************
 *                            testPIN                                *
 * This Boolean function accepts and compares the values stored in   *
 * two int arrays. If they both have exactly the same set of values, *
 * true is returned. If there are any differences, false is returned.*
 *********************************************************************/
bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (custPIN[index] != databasePIN[index])
			return false;        // We've found two different values 
	}
	return true;                 // If we make it this far, 
                                 // all values are the same
}
