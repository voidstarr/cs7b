// This program has two loops. The first displays the numbers 
// from 1 up to 5. The second displays the numbers from 5 down to 1. 
// The program uses the ++ and -- operators to change the value 
// of the loop control variable.
#include <iostream>
using namespace std;
 
int main()
{
   int count = 1;      // Initialize the loop control variable to 1
   while (count < 6)
   {
	   cout << count << "   ";
	   count++;        // The ++ operator increments count
   }
   cout << endl;
   
   count = 5;          // Re-initialize the loop control variable to 5
   while (count > 0)
   {
	   cout << count << "   ";
	   count--;        // The -- operator decrements count 
   }
   cout << endl;
   return 0;
}
