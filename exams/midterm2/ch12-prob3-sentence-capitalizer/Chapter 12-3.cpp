// Mario Aguirre Group 2
// Chapter 12-3.cpp : Sentence Capitalizer: Write a funtion that
// accepts a C-String as an argument and capitalizes the first character 
// of each sentence in the string.

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string capitalizer(char*); // char points to an existing c-string

const int LENGTH = 100; // limit the size of the string

int main()
{
	char input[LENGTH];// set the limit to a char array

	//ask user to input a string of characters up to 100 char
	cout << "Enter a non-capitalized sentence or sentences up to "
		<< LENGTH << " characters in length: " << endl;
	
	cin.getline(input, LENGTH);//use cin.getline to grab the whole sentence or line


	cout << "\nCapitalized sentence(s): " << endl;

	//output the capitalized sentence
	//call the capitalizer function and set in the input
	cout << capitalizer(input) << "\n" << endl;
	

	system("pause");
    return 0;
}


//capitalizer string function takes and returns a char.
string capitalizer(char *str)
{
	bool found = true;// create a bool found and set to true.

	//create a loop function for i. strlen is the number
	//of chars passed in the beggining of the c-string.
	for (int i = 0; i < strlen(str); i++)
	{
		if (found  && !(str[i] == ' ')) { //if found and str[i] is not a space..

		   //str[i] equals to the toupper function that returns 
		   //the ASCII code of a char from lowercase to uppercase.
			str[i] = toupper(str[i]);

			found = false; // set found to false.
		}

		//if str[i] is equal to any of the 3 sentence puncuations.
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {

			found = true; // set found to true.
		}

	}
	return str; // return str
}