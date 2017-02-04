// This program demonstrates the SimpleVector template. 
#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
    const int SIZE = 10;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    // Store values in the arrays
    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = (x * 2);
        doubleTable[x] = (x * 2.14);
    }

    // Display the values in the arrays
    cout << "These values are in intTable:\n";
    intTable.print();
    cout << "These values are in doubleTable:\n";

    doubleTable.print();

    // Use the built-in + operator on array elements
    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = intTable[x] + 5;
        doubleTable[x] = doubleTable[x] + 1.5;
    }
    // Display the values in the array
    cout << "These values are in intTable:\n"; 
    intTable.print();
    cout << "These values are in doubleTable:\n";
    doubleTable.print();

    // Use the built-in ++ operator on array elements
    for (int x = 0; x < SIZE; x++)
    {
        intTable[x]++;
        doubleTable[x]++;
    }
    // Display the values in the array 
    cout << "These values are in intTable:\n";
    intTable.print();
    cout << "These values are in the doubleTable:\n";
    doubleTable.print();
    cout << endl;
    return 0;
}