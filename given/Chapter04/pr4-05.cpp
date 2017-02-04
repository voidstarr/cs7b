// This program demonstrates how a lack of precision in 
// floating-point numbers can make equality comparisons unreliable.
#include <iostream>
using namespace std;

int main()
{
	double result = .666667 * 6.0;  

	// 2/3 of 6 should be 4 and, if you print result, 4 is displayed.
	cout << "result = " << result << endl;

	// However, internally result is NOT precisely equal to 4.
	if (result == 4.0)
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;

	return 0;
}
