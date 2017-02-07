#include <iostream>
#include "NumberArray.h" 
using namespace std;
 
//*********************************************
//Constructor allocates an array of the       *
//given size and sets all its entries to the  *
//given value.                                *
//*********************************************
NumberArray::NumberArray(int size, double value)
{
  arraySize = size;
  aPtr = new double[arraySize];
  setValue(value);
}

//*******************************************************
//Sets all the entries of the array to the same value.  *
//*******************************************************
void NumberArray::setValue(double value)
{
  for(int index = 0; index < arraySize; index++)
     aPtr[index] = value;
}

//***************************************
//Prints all the entries of the array.  *
//***************************************
void NumberArray::print() const
{
  for(int index = 0; index < arraySize; index++)
    cout << aPtr[index] << "  ";
}