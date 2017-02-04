//This program illustrates  IntStack exception handling. 
#include "intstack.h"
#include <iostream>
using namespace std;
int main()
{
   
   IntStack  stack(5);
   int values[] = { 5, 10, 15, 20, 25 };
   int value;
   try
   {
      cout << "Pushing...\n";
      for (int k = 0; k < 5; k++)
      {
         cout << values[k] << "  ";
         stack.push(values[k]);
      }
      cout << "\nPushing value after stack is full..";
      stack.push(30);
      cout << "\nYou should not see this!!";
      cout << endl;
   }
   catch (IntStack::Overflow)
   {
      cout << "\nAn Overflow exception occurred.\n";
   }
   
   return 0;
}