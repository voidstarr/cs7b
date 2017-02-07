// This program demonstrates the use of the library function 
// object greater<T> to sort arrays in descending order.
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   double d_values[]{ 12.5, 78.2, 8.34, 48.0, -7.5 };
   string words[]{ "the", "quick", "brown", "fox", "jumps",
                     "over", "the", "lazy", "dog"
   };
   // Display array of numbers
   cout << "Original array of numbers:\n";
   for (auto x : d_values) { cout << x << " ";  }
   cout << endl;

   // Sort array of numbers and display
   sort(begin(d_values), end(d_values), greater<double>());
   cout << "Number array in descending order:\n";
   for (auto x : d_values) { cout << x << " "; }

   cout << endl;

   // Display array of words
   cout << "Original array of words:\n";
   for (auto x : words) { cout << x << " "; }
   cout << endl;

   // Sort array of words and display
   sort(begin(words), end(words), greater<string>());
   cout << "Number array in descending order:\n";
   for (auto x : words) { cout << x << " "; }

   cout << endl;
   return 0;
}