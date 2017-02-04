// This program displays the decimal value of a fraction. 
#include <iostream>
using namespace std;

int main()
{
	double numerator, denominator;

	cout << "This program shows the decimal value of a fraction.\n";
	
	// Have the user enter the numerator and denominator
	cout << "Enter the numerator: ";
	cin  >> numerator;
	cout << "Enter the denominator: ";
	cin  >> denominator;
	
	// Compute and display the decimal value
	cout << "The decimal value is "<< (numerator / denominator) << endl;
	return 0;
}
