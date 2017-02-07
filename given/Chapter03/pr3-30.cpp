// This program demonstrates what happens in C++ if you
// try to generate random numbers without a "seed".
#include <iostream>
#include <cstdlib>       // Header file needed to use rand
using namespace std;

int main()
{
	// Generate and print three random numbers
    cout << rand() << "      " ;
    cout << rand() << "      " ;
    cout << rand() << endl;

	return 0;
}
