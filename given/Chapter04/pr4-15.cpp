// This program illustrates what can happen when a 
// Boolean value is compared to the C++ constant true.
#include <iostream>
#include <cctype>        // Needed to use the isalpha function
using namespace std;

int main()
{
	cout << "Is '?' an alphabetic character?  " << isalpha('?') << "\n";
	cout << "Is 'X' an alphabetic character?  " << isalpha('X') << "\n";
	cout << "Is 'x' an alphabetic character?  " << isalpha('x') << "\n\n";
	
	cout << "Ask if(isalpha('x') == true) \n";
	if (isalpha('x') == true)
		cout << "The letter x IS an alphabetic character. \n\n";
	else 
		cout << "The letter x is NOT an alphabetic character. \n\n";
	
	cout << "Ask if(isalpha('x')) \n";
	if (isalpha('x')) 
		cout << "The letter x IS an alphabetic character. \n";
	else 
		cout << "The letter x is NOT an alphabetic character. \n";

	return 0;
}
