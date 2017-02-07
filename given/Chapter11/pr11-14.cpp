// This program demonstrates the copy constructor and the
// copy assignment operator for the NumberArray class.
#include <iostream>
#include "overload2.h"
using namespace std;

//Function Prototype
NumberArray makeArray();

int main()
{
   NumberArray first;
   first = makeArray();
   NumberArray second = makeArray();	

   cout << endl << "The object's data is ";
   first.print();
   cout << endl;

   return 0;
}

//*****************************************************
// Creates a local object and returns it by value.    *
//*****************************************************
NumberArray makeArray()
{
    NumberArray nArr(5, 10.5);
    return nArr;
}