// This program computes and displays the average of three numbers
// entered by the user. However, it contains a bug. Can you find it?
#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, avg;

	cout << "Enter the first number: ";
	cin  >> num1;
	cout << "Enter the second number: ";
	cin  >> num2;
	cout << "Enter the third number: ";
	cin  >> num3;
	avg = num1 + num2 + num3 / 3;
	cout << "The average is " << avg << endl;
	return 0;
}
