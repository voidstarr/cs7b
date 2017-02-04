//This program demonstrates input and output of numbers 
//using the octal, decimal, and hexadecimal number systems.  
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
    int a, b;
    // Read two decimals and print hex and octal equivalents
    cout << "Enter two decimal numbers: ";
    cin >> a >> b;
    cout << "The numbers in decimal: " << a << '\t' << b << endl;    
    cout << "The numbers in hexadecimal: " <<  hex 
         << showbase << a << '\t' << b << endl;    
    cout << "The numbers in octal: " << oct 
         <<  a << '\t' << b << endl;
    
    // Read some hexadecimals and print their decimal equivalents
    cout << "Enter two hexadecimal numbers: ";
    cin >> hex >> a >> b;
    cout << "You entered decimal " << dec 
         << a << '\t' << b << endl;
    
    // Read some octals and print their decimal equivalents
    cout << "Enter two octal numbers: ";
    cin >> oct >>  a >> b;
    cout << "You entered decimal " << dec 
         << a << '\t' << b << endl; 
 
    return 0;
}

const int SIZE = 2;
string names[SIZE] = {"Catherine", "Bill"};
int numbers[SIZE] = {12, 2005};