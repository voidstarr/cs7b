#include <iostream>
#include "overload3.h" 
using namespace std;

//***************************************************
//The overloaded operator function for assignment.  *
//***************************************************
NumberArray& NumberArray::operator=(const NumberArray &right)
{
    cout << "Copy Assignment operator running\n";
    if (this != &right)
    {
        if (arraySize > 0)
        {
            delete[] aPtr;
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
    cout << "Copy constructor running\n";
    arraySize = obj.arraySize;
    aPtr = new double[arraySize];
    for (int index = 0; index < arraySize; index++)
    {
        aPtr[index] = obj.aPtr[index];
    }
}

//**********************************************
//Constructor.                                 *
//**********************************************
NumberArray::NumberArray(int size1, double value)
{
    cout << "Regular constructor running\n";
    arraySize = size1;
    aPtr = new double[arraySize];
    setValue(value);
}

//**********************************************
//Default Constructor.                         *
//**********************************************
NumberArray::NumberArray()
{
    cout << "Default constructor running\n";
    arraySize = 2;
    aPtr = new double[arraySize];
    setValue(0.0);
}

//****************************************************
//Sets the value stored in all entries of the array. *
//****************************************************
void NumberArray::setValue(double value)
{
    for (int index = 0; index < arraySize; index++)
    {
        aPtr[index] = value;
    }
}

//***************************************
//Print out all entries in the array.   *
//***************************************
void NumberArray::print() const
{
    for (int index = 0; index < arraySize; index++)
    {
        cout << aPtr[index] << "  ";
    }
}

//*************************************
// Destructor.                        *
//*************************************
NumberArray::~NumberArray()
{
    cout << "Destructor running\n";
    if (arraySize > 0)
    {
        delete[] aPtr;
    }
}

//***********************************************************
// Move assignment operator.                                *
//***********************************************************
NumberArray & NumberArray::operator=(NumberArray&& right)
{
    cout << "Move assignment is running\n"; // Trace

    if (this != &right)
    {
        swap(arraySize, right.arraySize);
        swap(aPtr, right.aPtr);
    }
    return *this;
}

//***********************************************************
// Move constructor.                                        *
//***********************************************************
NumberArray::NumberArray(NumberArray && temp)
{
    // "Steal" the resource from the temp object
    this->arraySize = temp.arraySize;
    this->aPtr = temp.aPtr;

    // Put the temp object in a safe state
    // for its destructor to run
    temp.arraySize = 0;
    temp.aPtr = nullptr;
}
