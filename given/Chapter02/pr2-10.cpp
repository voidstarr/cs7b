// This program defines three variables in the same statement.
// They are given initial values at the time they are defined.
#include <iostream>
using namespace std;

int main()
{
	int floors =  15,
	    rooms  = 300,
	    suites =  30;

	cout << "The Grande Hotel has " << floors << " floors\n";
	cout << "with " << rooms << " rooms and " << suites;
	cout << " suites.\n";
	return 0;
}
