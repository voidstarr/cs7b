// This program demonstrates the action of 
// convert constructors.
#include "Convert.h"

// Function prototypes.
void printValue(IntClass);
IntClass f(int);

int main()
{
   // Initialize with an int
   IntClass intObject = 23;
   cout << "The value is " << intObject.getValue() << endl;

   // Assign an int
   intObject = 24;
   cout << "The value is " << intObject.getValue() << endl;

   // Pass an int to a function expecting IntClass
   cout << "The value is ";
   printValue(25);
   cout << endl;

   // Demonstrate conversion on a return
   intObject = f(26);
   cout << "The value is ";
   printValue(intObject);

   return 0;
}