#pragma once
#include <string>
class EncryptableString : public std::string
{
private:
	std::string eString;
	std::string encrypted = "";

public:

	EncryptableString();
	EncryptableString(std::string);
	void seteString(std::string);
	std::string geteString();
	std::string getEncrypted();
	void Encrypt();
	~EncryptableString();
};

