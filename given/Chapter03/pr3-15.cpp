// This program demonstrates how the setprecision manipulator 
// affects the way a floating-point value is displayed.
#include <iostream>
#include <iomanip>       // Header file needed to use setprecision
using namespace std;

int main()
{
	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	return 0;
}
