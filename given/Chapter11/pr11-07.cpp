// This program demonstrates the deficiencies of 
// the default copy constructor.
#include <iostream>
#include <iomanip>
#include "NumberArray.h" 
using namespace std;

int main()
{
  // Create an object
  NumberArray first(3, 10.5);
  
  // Make a copy of the object
  NumberArray second = first;
  
  // Display the values of the two objects
  cout << setprecision(2) << fixed << showpoint;
  cout << "Value stored in first object is ";
  first.print();
  cout << endl << "Value stored in second object is ";
  second.print();
  cout << endl << "Only the value in second object "
       << "will be changed."  << endl;
		 
  // Now change the  value stored in the second object
  second.setValue(20.5);
  
  // Display the values stored in the two objects
  cout << "Value stored in first object is ";
  first.print();
  cout << endl << "Value stored in second object is ";
  second.print();
  
  return 0;
}