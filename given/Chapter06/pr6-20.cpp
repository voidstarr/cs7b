// This program shows that local variables do not retain 
// their values between function calls.
#include <iostream>
using namespace std;

void showLocal();       // Function prototype

int main()
{
	showLocal();
	showLocal();
	return 0;
}

/******************************************************
 *                       showLocal                    *
 * This function sets, displays, and then changes the *
 * value of local variable localNum before returning. *
 ******************************************************/
void showLocal()
{
	int localNum = 5;   // Local variable

	cout << "LocalNum is " << localNum << endl;  
	localNum = 99;
}
