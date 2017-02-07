// This program demonstrates that an array element 
// can be passed to a function like any other variable.
#include <iostream>
using namespace std;

void showValue(int);    // Function prototype

int main()
{
	const int ARRAY_SIZE = 8;
   int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

	for (int index = 0; index < ARRAY_SIZE; index++)
		showValue(collection[index]);
	cout << endl;
	return 0;
}

/***************************************
 *               showValue             *
 * This function displays the integer  *
 * value passed to its num parameter.  *
 ***************************************/
void showValue(int num)
{
	cout << num << " ";
}
