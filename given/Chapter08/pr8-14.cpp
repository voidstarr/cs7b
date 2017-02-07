// This program illustrates how a string can be processed as an array
// of individual characters. It reads in a string, then counts the 
// number of vowels in the string. It uses the toupper function to 
// uppercase each letter in the string and the string class function 
// length() to determine how many characters are in the string.
#include <iostream>
#include <string>        // Needed to use string objects
#include <cctype>        // Needed for the toupper function
using namespace std;

int main()
{
	char ch;
	int vowelCount = 0;
	string sentence;
	
	cout << "Enter any sentence you wish and I will \n"
		 << "tell you how many vowels are in it.\n";
	getline(cin, sentence);

	for (int pos = 0; pos < sentence.length(); pos++)
	{	
		// Uppercase a copy of the next character and assign it to ch
		ch = toupper(sentence[pos]); 

		// If the character is a vowel, increment vowelCount                            
		switch(ch)
		{	case 'A': 
			case 'E': 
			case 'I': 
			case 'O': 
			case 'U': vowelCount++;
		}
	}
	cout << "There are " << vowelCount << " vowels in the sentence.\n";
	return 0;
}
