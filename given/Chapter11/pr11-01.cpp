// This program illustrates the this pointer.
#include <iostream>
#include "ThisExample.h" 
using namespace std;

int main()
{
  Example ob1(10), ob2(20);

  // Print the addresses of the two objects
  cout << "Addresses of objects are " << &ob1
       << " and " << &ob2 << endl;

  // Print the addresses and values from within
  // the member function
  ob1.printAddressAndValue();
  ob2.printAddressAndValue();

  return 0;
}