// This program displays the values C++ uses to represent true and false.
#include <iostream>
using namespace std;

int main()
{
	bool trueValue, falseValue;
    int  x = 5, y = 10;
	
	trueValue = (x < y);
	falseValue = (y == x);
	
	cout << "True  is " << trueValue << endl;
	cout << "False is " << falseValue << endl;
	return 0;
}
