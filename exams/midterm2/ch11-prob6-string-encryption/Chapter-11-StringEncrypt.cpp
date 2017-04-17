
//*********************************************************************************************
//*                                                                                           *
//*                        Chapter 11- Exercise 6: String Encryption                          *
//*                                Programmed By: Ivan Lopez                                  *
//*                                      Midterm # 2                                          *
//*                                                                                           *
//*********************************************************************************************

#include "EncryptableString.h"
#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	//tiles for menu
	char tile1 = 201,//top left
		tile2 = 205,//=
		tile3 = 187,//top right
		tile4 = 188,//bottom right
		tile5 = 200;//bottom left
	std::string menuText = "Hey there, Welcome to Mediocre Encryptor v1.0";
	
	

	//you can ignore, just rendering main screen
	cout << tile1;
	for (int i = 0; i < menuText.size()+2; i++) {
		cout << tile2;
	}
	cout << tile3 << endl;
	cout << " " << menuText << " " << endl;
	cout << tile5;
	for (int i = 0; i < menuText.size() + 2; i++) {
		cout << tile2;
	}
	cout << tile4 << endl;
	//you can pay attention again

	EncryptableString test;
	//declaring the Users input
	std::string userInput = "";


	cout << "Please enter the string you would like to encrypt: ";
	std::getline(std::cin, userInput);


	//takes the user's input 
	test.seteString(userInput);

	//now we encrypt
	test.Encrypt();
	cout << "Your string has encrypted to: " << test.getEncrypted() << endl;

	
	
	

	

    return 0;
}

