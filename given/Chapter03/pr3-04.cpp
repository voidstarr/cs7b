// This program demonstrates how cin can read multiple values
// of different data types.
#include <iostream>
using namespace std;

int main()
{
	int whole;
	double fractional;
	char letter;

	cout << "Enter an integer, a double, and a character: ";
	cin  >> whole >> fractional >> letter;

	cout << "whole: " << whole << endl;
	cout << "fractional: " << fractional << endl;
	cout << "letter: " << letter << endl;
	return 0;
}
