// This program inputs the lengths of the two sides of a right 
// triangle, then calculates and displays the length of the hypotenuse. 
#include <iostream>
#include <cmath>        // Header file needed to use the sqrt function
using namespace std;

int main()
{
	double a, b, c;

	// Get the length of the two sides
	cout << "Enter the length of side a: ";
	cin  >> a;
	cout << "Enter the length of side b: ";
	cin  >> b;
	
	// Compute and display the length of the hypotenuse
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));
	
	cout << "The length of the hypotenuse is ";
	cout << c << endl;
	return 0;
}
