// This program is supposed to find the square root of 5 numbers
// entered by the user. However, if a negative number is entered
// an error message displays and a break statement is used to 
// stop the loop early.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double number;
	
	cout << "Enter 5 positive numbers separated by spaces and \n" 
	     << "I will find their square roots: ";
	
	for (int count = 1; count <= 5; count++)
	{
		cin >> number;
		if (number >= 0.0)
		{	cout << "\nThe square root of " << number << " is " 
			     << sqrt(number);
		}
		else
		{	cout << "\n\n" << number << " is negative. "
		         << "I cannot find the square root \n"
				 << "of a negative number. The program is terminating.\n";
			break;
        }			
	}
   return 0;
}			
