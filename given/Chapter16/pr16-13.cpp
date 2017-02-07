// This program demonstrates how iterators and related concepts can
// be used to write code that works with arrays and STL containers.
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//*****************************************
// This function will print a range of    *
// values from an array or container.     *
//*****************************************
template<typename T>
void print(T begin_iter, T end_iter)
{
   auto iter = begin_iter;
   while (iter != end_iter)
   {
      cout << *iter << " ";
      iter++;
   }
   cout << endl;
}


int main()
{
   // Print an array of strings
   string names[]{ "Anna", "Bob", "Chuck" };
   print(begin(names), end(names));

   // Print a vector of integers
   vector<int> vec{ 10, 20, 30 };
   print(begin(vec), end(vec));

   return 0;
}