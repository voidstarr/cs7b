// This program demonstrates overflow and underflow.
#include <iostream>
using namespace std;
 
int main()
{
   // Set intVar to the maximum value a short int can hold
   short intVar = 32767;
  
   // Set floatVar to a number too small to fit in a float
   float floatVar = 3.0E-47;
   
   // Display intVar
   cout << "Original value of intVar     " << intVar << endl;
   
   // Add 1 to intVar to make it overflow
   intVar = intVar + 1;
   cout << "intVar after overflow       " << intVar << endl;
   
   // Subtract 1 from intVar to make it overflow again
   intVar = intVar - 1;
   cout << "intVar after 2nd overflow    " << intVar << endl;
   
   // Display floatVar
   cout << "Value of very tiny floatVar " << floatVar;
   return 0;
}
