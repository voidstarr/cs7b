// This program demonstrates the dynamic stack
// class DynIntStack.
#include <iostream>
#include "DynIntStack.h" 
using namespace std;

int main()
{
   DynIntStack stack; 
   int popped_value;
   // Push values 5, 10, and 15 on the stack
   for (int value = 5; value <= 15; value = value + 5)
   {
      cout << "Push: " << value << "\n";
      stack.push(value);
   }
   cout << "\n";

   // Pop three values 
   for (int k = 1; k <= 3; k++)
   {
      cout << "Pop: ";
      stack.pop(popped_value);
      cout << popped_value << endl;
   }

   // Stack is now empty, a pop will cause an exception
   try
   {
      cout << "\nAttempting to pop again... ";
      stack.pop(popped_value);
   }
   catch (DynIntStack::Underflow)
   {
      cout << "Underflow exception occured.\n";
   }
   return 0;
}