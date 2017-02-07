// This program demonstrates the postfix and prefix
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
   int num = 4;
 
   // Illustrate postfix and prefix ++ operator
   cout << num   << "    ";     // Displays 4
   cout << num++ << "    ";     // Displays 4, then adds 1 to num
   cout << num   << "    ";     // Displays 5
   cout << ++num << "\n";       // Adds 1 to num, then displays 6
  
   // Illustrate postfix and prefix -- operator  
   cout << num   << "    ";     // Displays 6
   cout << num-- << "    ";     // Displays 6, then subtracts 1 from num
   cout << num   << "    ";     // Displays 5
   cout << --num << "\n";       // Subtracts 1 from num, then displays 4
     
   return 0;
}
