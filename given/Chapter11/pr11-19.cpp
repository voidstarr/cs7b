// This program demonstrates the type conversion operators for
// the Length class.
#include "Length2.h"  

#include <iostream>
#include <string>
using namespace std;

int main()
{
   Length distance(0);
   double feet;
   int inches;
   distance.setLength(4, 6);
   cout << "The Length object is " << distance <<  "." << endl;

   // Convert and print
   feet = distance;
   inches = distance;
   cout << "The Length object measures " << feet << " feet." << endl;
   cout << "The Length object measures " << inches << " inches." << endl;

   return 0;
}