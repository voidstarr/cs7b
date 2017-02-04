// This program demonstrates cin's getline function
// to read a line of text into a C-string.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 81;
	char sentence[SIZE];

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered " << sentence << endl;
	return 0;
}
