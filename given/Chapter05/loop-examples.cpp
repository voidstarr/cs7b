// This program provides samples of the while loop, 
// the do-while loop, and the for loop.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num;
	char doAgain;

	// while loop
	cout << "This code uses a while loop "
	     << "controlled by an end sentinel.\n"; 
	cout << "It finds the square of any integer.\n";
	cout << "\nEnter an integer, or -99 to quit: ";
	cin  >> num;
	while (num != -99)
	{	cout << num << " squared is " << pow(num, 2.0) << endl;
		cout << "\nEnter an integer, or -99 to quit ";
		cin  >> num;
	}	
   cout << endl;
	
	// do-while loop
	cout << "\n*************************************************\n";
	cout << "This code uses a do-while loop "
	     << "controlled by a Y/N User input.\n"; 
	cout << "It finds the square of any integer.\n";
	do
	{	cout << "\nEnter an integer: ";
		cin  >> num;
		cout << num << " squared is " << pow(num, 2.0) << endl;
		cout << "Do you want to square another number? (Y/N) ";
		cin  >> doAgain;
	} while (doAgain == 'Y' || doAgain == 'y');
	cout << endl;

	// for loop
	cout << "\n*************************************************\n";
	cout << "This code uses a for loop that loops 8 times.\n";
	cout << "It finds the squares of the integers from 1 to 8.\n\n";
  	for (num = 1; num <= 8; num++)
	{
		cout << num << " squared is " << pow(num, 2.0) << endl;
	}
	return 0;
}
