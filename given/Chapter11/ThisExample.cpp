#include "ThisExample.h"
#include <iostream>
using namespace std; 

//*****************************************
//set value of object.                    *
//*****************************************
void Example::setValue(int a)
{
  x = a;
} 

//*****************************************
// Print address and value.               *
//*****************************************
void Example::printAddressAndValue()
{
 cout << "The object at address " << this << " has "
      << "value " << (*this).x << endl; 
}
