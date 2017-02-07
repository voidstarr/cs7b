// This program demonstrates the use of the swap  
// function template.
#include <iostream>
#include <string>
#include <algorithm>  // Needed for swap
using namespace std;

int main()
{      
  // Get and swap two chars
  char firstChar, secondChar;
  cout << "Enter two characters: ";
  cin >> firstChar >> secondChar;
  swap(firstChar, secondChar);
  cout << firstChar << " " << secondChar << endl;

  // Get and swap two ints
  int firstInt, secondInt;
  cout << "Enter two integers: ";
  cin >> firstInt >> secondInt;
  swap(firstInt, secondInt);
  cout << firstInt << " " << secondInt << endl;

  // Get and swap two strings
  cout << "Enter two strings: ";
  string firstString, secondString;
  cin >> firstString >> secondString;
  swap(firstString, secondString);
  cout << firstString << " " << secondString << endl;
  return 0;
}