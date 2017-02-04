#include <iostream>
#include "overload.h" 
using namespace std;

//***************************************************
//The overloaded operator function for assignment.  *
//***************************************************
NumberArray& NumberArray::operator=(const NumberArray &right)
{
    if (this != &right)
    {
      if (arraySize > 0) 
      { 
          delete [] aPtr; 
      }
      arraySize = right.arraySize;
      aPtr = new double[arraySize];
      for (int index = 0; index < arraySize; index++)
      {
        aPtr[index] = right.aPtr[index];
      }
    }
    return *this;
}

//**********************************************
//Copy constructor.                            *
//**********************************************
NumberArray::NumberArray(const NumberArray &obj)
{
  arraySize = obj.arraySize;
  aPtr = new double[arraySize];
  for(int index = 0; index < arraySize; index++)
  {
    aPtr[index] = obj.aPtr[index];
  }
}

//**********************************************
//Constructor.                                 *
//**********************************************
NumberArray::NumberArray(int size1, double value)
{
  arraySize = size1;
  aPtr = new double[arraySize];
  setValue(value);
}

//****************************************************
//Sets the value stored in all entries of the array. *
//****************************************************
void NumberArray::setValue(double value)
{
  for(int index = 0; index < arraySize; index++)
  {
     aPtr[index] = value;
  }
}

//***************************************
//Print out all entries in the array.   *
//***************************************
void NumberArray::print() const
{
  for(int index = 0; index < arraySize; index++)
  {
    cout << aPtr[index] << "  ";
  }
}
