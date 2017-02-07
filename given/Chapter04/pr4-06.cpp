// This program demonstrates how to safely test a floating-point number
// to see if it is, for all practical purposes, equal to some value.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double result = .666667 * 6.0; 

	// 2/3 of 6 should be 4 and, if you print result, 4 is displayed.
	cout << "result = " << result << endl;
	
	// However, internally result is NOT precisely equal to 4.
    // So test to see if it is "close" to 4.
	if (abs(result - 4.0 < .0001))
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;

	return 0;
}
