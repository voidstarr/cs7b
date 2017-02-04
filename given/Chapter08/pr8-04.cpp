// This program unsafely stores values beyond an array's boundary.  
// What happens depends on how your computer manages memory.
// It MAY overwrite other memory variables. It MAY crash your computer. 
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	int A[SIZE] = {1, 1, 1}; // Define A as a 3-element int array 
	                         // holding the values 1, 1, 1
	int B[SIZE];             // Define B as another 3-element int array
	
	// Here is what is stored in array A
	cout << "Here are the original numbers in 3-element array A:  "; 
	for (int count = 0; count < 3; count++)
		cout << A[count] << "   ";
	
	// Attempt to store seven numbers in the 3-element array
	cout << "\n\nNow I'm storing 7 numbers in 3-element array B.";
	for (int count = 0; count < 7; count++)
		B[count] = 5;

	// If the program is still running, display the numbers
	cout << "\nIf you see this message, the computer did not crash.";
	cout << "\n\nHere are the 7 numbers in array B  : ";
	for (int count = 0; count < 7; count++)
		cout << B[count] << "  ";
	
	cout << "\nHere are the numbers now in array A: "; 
	for (int count = 0; count < 3; count++)
		cout << A[count] << "  ";
	
	cout << "\n\nArray A's values were overwritten by \n"
	     << "the values that did not fit in Array B.\n";
	return 0;
}
