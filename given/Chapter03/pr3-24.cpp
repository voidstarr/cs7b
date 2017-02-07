// This program uses cin >> to read a word into a C-string.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 12;
    char name[SIZE];    // name is a set of 12 memory cells
	
	cout << "Please enter your first name: ";
	cin  >> name;
	cout << "Hello, " << name << endl;
	return 0;
}
