// This program uses two range-based for loops with a vector.
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
   // Define a vector with a starting size of 5 elements
   vector<int> numbers(5);

   // Get values for the vector elements
   // Make the range variable a reference variable so it can be
   // used to change the contents of the element it references.
   for (int &val : numbers)
   {
      cout << "Enter an integer value: ";
      cin  >> val;
   }

   // Display the vector elements
   cout << "\nHere are the values you entered: \n";

   for (int val : numbers)
      cout << val << "  ";

   cout << endl;
   return 0;
}
