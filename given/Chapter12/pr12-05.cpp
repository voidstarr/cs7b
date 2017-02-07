// This program correctly tests two C-strings for
// equality with the strcmp function. 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   // Two arrays for two strings
   const int LENGTH = 40;
   char firstString[LENGTH], secondString[LENGTH];

   // Read two strings
   cout << "Enter a string: ";
   cin.getline(firstString, LENGTH);
   cout << "Enter another string: ";
   cin.getline(secondString, LENGTH);
	
   // Compare the strings for equality with strcmp
   if (strcmp(firstString, secondString) == 0)
       cout << "You entered the same string twice.\n";
   else
       cout << "The strings are not the same.\n";
		
   return 0;
}
