// This program uses a static local variable.
#include <iostream>
using namespace std;

void showStatic();          // Function prototype

int main()
{
	// Call the showStatic function five times
	for (int count = 0; count < 5; count++)
		showStatic();
   return 0;
}

/**************************************************
 *                   showStatic                   *
 * This function keeps track of how many times it *
 * has been called by incrementing a static local *
 * variable, numCalls, each time it is called.    *
 **************************************************/
void showStatic()
{
	static int numCalls = 0;  // Static local variable

	cout << "This function has been called "
	     << ++numCalls << " times. " << endl;
}
