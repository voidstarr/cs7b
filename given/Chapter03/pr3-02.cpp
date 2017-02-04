// This program illustrates what can happen when a 
// floating-point number is entered for an integer variable.
#include <iostream>
using namespace std;

int main()
{ 
	int intNumber;
	double floatNumber;

	cout << "Input a number. ";
	cin  >> intNumber;
	cout << "Input a second number.\n";
	cin  >> floatNumber;
	cout << "You entered: " << intNumber 
	     << " and " << floatNumber << endl;
 
	return 0;
}
