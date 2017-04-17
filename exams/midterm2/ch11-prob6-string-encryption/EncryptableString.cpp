#include "EncryptableString.h"



EncryptableString::EncryptableString()
{
	eString = "";
	encrypted = "";
}

EncryptableString::EncryptableString(std::string eString)
{
	this->eString = eString;
}

void EncryptableString::seteString(std::string eString)
{
	//using this pointer so i can get away with naming them the same thing
	this->eString = eString;
}

std::string EncryptableString::geteString()
{

	return this->eString;
}

std::string EncryptableString::getEncrypted()
{
	return encrypted;
}

void EncryptableString::Encrypt()
{
	//This encryption will change each letter with the following letter in its 
	//ascii coordinates, ex.) a -> b.
	//Since strings are basically glorified char arrays, the idea is to 
	//use a techinque similar to char[i]+1 so it increases the ascii value by 1
	//however this must respect the range of A-Z, a-z

	for (int i = 0; i < this->eString.size(); i++) {
		//exception handling, since Z and z need to become A and a
		if (this->eString[i] == 'z' || this->eString[i] == 'Z') {
			encrypted += (char)(this->eString[i]-25);
			
		}else
			encrypted += (char)(this->eString[i]+1);
		
	}
	//eString = encrypted;

}


EncryptableString::~EncryptableString()
{
}
