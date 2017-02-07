// This program illustrates the use of function templates 
// with multiple types.
#include <iostream> 
#include <string> 
using namespace std;
  
//template function
template <class T1, class T2, class T3>
void echoAndReverse(T1 a1, T2 a2, T3 a3)
{
  cout << "Original order is: "
       << a1 << "  " << a2 << "  "  << a3 << endl;
  cout << "Reversed order is: "
       << a3 << "  " << a2 << "  "  << a1 << endl;
}

int main()
{
  echoAndReverse("Computer", 'A', 18);
  echoAndReverse("One", 4, "All");
  return 0;
}