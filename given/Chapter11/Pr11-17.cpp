// This program demonstrates the use of 
// the for_each algorithm function.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class PrintSquare
{
public:
   void operator()(int a) { cout << a * a << " "; }
};

int main()
{
   vector<int> vec{ 1, 2, 3, 4, 5, 6 };

   // print square of each element in the array
   for_each(begin(vec), end(vec), PrintSquare());

   cout << endl;
   return 0;
}