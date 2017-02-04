// This program has an uninitialized global variable.
#include <iostream>
using namespace std;

int globalNum;    // Global variable automatically set to zero

int main()
{
	cout << "GlobalNum is " << globalNum << endl;
	return 0;
}
