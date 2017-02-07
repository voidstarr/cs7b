// This program demonstrates a function, countChars,  
// that counts the number of times a specific
// character appears in a string. 
#include <iostream>
using namespace std; 

// Function prototype
int countChars(const char *, char);

int main() 
{
    // Define array to hold the string
    const int S_LENGTH = 51;
    char userString[S_LENGTH];

    char letter; // User input

    // Read the string and the letter to count
    cout << "Enter a string (up to "
         << S_LENGTH - 1 << " characters): ";
    cin.getline(userString, S_LENGTH);
    cout << "Enter a character and I will tell you how many\n";
    cout << "times it appears in the string: ";
    cin >> letter;

    // Output the results of the letter count
    cout << letter << " appears ";
    cout << countChars(userString, letter) << " times.\n";
    return 0;
}

//*******************************************************
// Definition of countChars. The parameter strPtr is    *
// a pointer that points to a string. The parameter     *
// ch is a character that the function searches for     *
// in the string. The function returns the number of    *
// times the character appears in the string.           *
//*******************************************************
int countChars(const char *strPtr, char ch) 
{
    int count = 0;
    while (*strPtr != '\0') 
    {
        if (*strPtr == ch)
            count++;
        strPtr++;
    }
    return count;
}