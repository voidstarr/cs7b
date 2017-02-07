// This program demonstrates a recursive function for
// counting the number of times a character appears
// in a string. 
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int frequency(char ch, string inputString , int pos);

int main()
{
   string inputString = "abcddddef";
	
   cout << "The letter d appears "
	<< frequency('d', inputString, 0) << " times.\n";
   return 0;
}
	
//************************************************
// Function frequency. This recursive function   *
// counts the number of times the character      *
// ch appears in inputString. The search begins  *
// at index position in the string.              *
//************************************************
int frequency(char ch, string inputString, int position) 
{ 
   if (position == inputString.length())   //base case
      return 0;
   if (inputString[position] == ch)
      return 1 + frequency(ch, inputString, position+1);
   else
      return frequency(ch, inputString, position+1);
}