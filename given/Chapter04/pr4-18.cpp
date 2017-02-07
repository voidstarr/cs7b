// This program uses two variables with the same name.
#include <iostream>
using namespace std;

int main()
{
	int number;      // Define a variable named number

	cout << "Enter a number greater than 0: ";
	cin  >> number;

	if (number > 0)
	{	int number;   // Define another variable named number
                         
 		cout << "Now enter another number: ";
		cin  >> number;
		cout << "The second number you entered was ";
		cout << number << endl;
	}
	cout << "Your first number was " << number << endl;
	return 0;
}
