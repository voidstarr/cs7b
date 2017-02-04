// This program makes sure that the divisor is not 
// equal to 0 before it performs a divide operation.
#include <iostream>
using namespace std;

int main()
{
   double num1, num2, quotient;

   // Get the two numbers
   cout << "Enter two numbers: ";
   cin  >> num1 >> num2;

   // If num2 is not zero, perform the division.
   if (num2 != 0)
   {
	   quotient = num1 / num2;
	   cout << "The quotient of " << num1 << " divided by "
		    << num2 << " is " << quotient << ".\n";
   }
   else
   {
	   cout << "Division by zero is not possible.\n"; 
	   cout << "Please run the program again and enter "
			<< "a number other than zero.\n";
   }
   return 0;
}
