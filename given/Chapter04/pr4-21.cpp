// This program demonstrates some of the available
// C++ character testing functions.
#include <iostream>
#include <cctype>        // Needed to use character testing functions
using namespace std;

int main()
{
	char input;
	
	cout << "Enter any character: ";
	cin.get(input);
	
	cout << "The character you entered is: " << input << endl;
	cout << "Its ASCII code is: " << static_cast<int>(input) << endl;
	
	if (isalpha(input))
	   cout << "That's an alphabetic character.\n";
	
	if (isdigit(input))
	   cout << "That's a numeric digit.\n";
	
	if (islower(input))
	   cout << "The letter you entered is lowercase.\n";
	
	if (isupper(input))
	   cout << "The letter you entered is uppercase.\n";
	
	if (isspace(input))
	   cout << "That's a whitespace character.\n";
	
	return 0;
}
