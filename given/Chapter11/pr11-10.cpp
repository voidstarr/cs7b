// This program demonstrates the Length class's overloaded 
// +, -, ==, and < operators.
#include <iostream>
#include "Length.h"
using namespace std;

int main()
{
    Length first(0), second(0), third(0);
    int f, i;
    cout << "Enter a distance in feet and inches: ";
    cin  >> f >> i;
    first.setLength(f, i);
    cout << "Enter another distance in feet and inches: ";
    cin  >> f >> i;
    second.setLength(f, i);

    // Test the + and - operators 
    third = first + second;
    cout << "first + second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";
    third = first - second;
    cout << "first - second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";

    // Test the relational operators
    cout << "first == second = ";
    if (first == second) cout << "true"; else cout << "false";
    cout << "\n";
    cout << "first < second = ";
    if (first < second) cout << "true"; else cout << "false";
    cout << "\n";
        
    return 0;
}
