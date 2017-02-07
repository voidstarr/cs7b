// This program uses setw with the cin object.
#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators
using namespace std;

int main()
{
	const int SIZE = 5;
    char word[SIZE];

	cout << "Enter a word: ";
	cin  >> setw(5) >> word;
	cout << "You entered " << word << endl;

	return 0;
}
