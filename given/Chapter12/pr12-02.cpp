// This program cycles through a character array, displaying
// each element until a null terminator is encountered. 
#include <iostream>
using namespace std; 

int main()
{
     const int LENGTH = 80;   // Maximum length for string
     char line[LENGTH];       // Array of char
   
     // Read a string into the character array
     cout << "Enter a sentence of no more than " 
          <<  LENGTH-1 << " characters:\n";
     cin.getline(line, LENGTH);
     cout << "The sentence you entered is:\n";
	
     // Loop through the array printing each character
     for(int index = 0; line[index] != '\0'; index++)
     {
        cout << line[index];	
     }
     return 0;
}
