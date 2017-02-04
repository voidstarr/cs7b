// This program demonstrates move constructor
// the move assignment operator.
#include <iostream>
#include "overload3.h"
using namespace std;

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