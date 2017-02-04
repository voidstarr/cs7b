// This program demonstrates the use of object-oriented 
// exception handling. 
#include <iostream>
#include "IntRange.h"
using namespace std; 

int main()
{
   IntRange range(5, 10);
   int userValue;
    
   cout << "Enter a value in the range 5 - 10: ";
   try
   {
	 userValue = range.getInput();
       cout << "You entered " << userValue << endl;
   }
   catch (IntRange::OutOfRange)
   {
       cout << "That value is out of range.\n";
   }
   cout << "End of the program.\n";
   return 0;
}