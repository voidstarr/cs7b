// This program uses a function to copy
// a string into an array. 
#include <iostream>
using namespace std;

// Function prototype
void stringCopy(char [], const char []);

int main() 
{
    // Define two arrays of char
    const int S_LENGTH = 30;
    char dest[S_LENGTH], source[S_LENGTH];

    // Read a string into a source array
    cout << "Enter a string with no more than "
         << S_LENGTH - 1 << " characters:\n";
    cin.getline(source, S_LENGTH);

    //	Copy it into a destination array and print
    stringCopy(dest, source);
    cout << "The string you entered is:\n" << dest << endl;
    return 0;
}

//**************************************************
// Definition of the stringCopy function.          *
// This function accepts two character arrays as   *
// arguments. The function assumes the two arrays  *
// contain C-strings. The contents of the second   *
// array are copied to the first array.            * 
//**************************************************

void stringCopy(char destStr[], const char sourceStr[]) 
{
    int index = 0;

    // Copy one character at a time till we come to 
    // the null terminator
    while (sourceStr[index] != '\0') 
    {
        destStr[index] = sourceStr[index];
        index++;
    }
    destStr[index] = '\0';
}