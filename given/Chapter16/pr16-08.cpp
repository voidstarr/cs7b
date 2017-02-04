// This program illustrates the use of function templates. 
#include <string>
#include <iostream>
using namespace std;

// Template for minimum of an array
template <class T>
T minimum(T arr[ ], int size)
{
  T smallest = arr[0];
  for (int k = 1; k < size; k++)
  {
    if (arr[k] < smallest)
      smallest = arr[k];
  }
  return smallest;
}

int main()
{
  // The compiler creates int minimum(int [], int)
  // when you pass an array of int
  int arr1[] = {40, 20, 35}; 
  cout << "The minimum number is " << minimum(arr1, 3)
       << endl;
  
  // The compiler creates string minimum(string [], int)
  // when you pass an array of string
  string arr2[] = {"Zoe", "Snoopy", "Bob", "Waldorf"};
  cout << "The minimum string is " << minimum(arr2, 4)
       << endl;
  
  return 0;
}