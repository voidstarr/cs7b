// This program can't find its variable.
#include <iostream>
using namespace std;

int main()
{
	cout << value;   // ERROR! value has not been defined yet!
	
	int value = 100;
	return 0;
}
