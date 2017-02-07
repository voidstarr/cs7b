// This program demonstrates using random numbers when a 
// "seed" is provided for the random number generator.
#include <iostream>
#include <cstdlib>       // Header file needed to use srand and rand
using namespace std;

int main()
{
	unsigned seed;         // Random generator seed

    // Get a "seed" value from the user
	cout << "Enter a seed value: ";
	cin  >> seed;
	
	// Set the random generator seed before calling rand()
	srand(seed); 
	
	// Now generate and print three random numbers
	cout << rand() << "      " ;
	cout << rand() << "      " ;
	cout << rand() << endl;

	return 0;
}
