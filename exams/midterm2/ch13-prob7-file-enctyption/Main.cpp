/*
*************************************************************************************************************
	Chapter 13 problem number seven, file encryption. Program reads input from a file,  encrypts it,
	and writes it to another file.
    Author: Austin Baker
    Group 2
*************************************************************************************************************
*/
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

//read information from file and encrypt it, function takes no parameters, and has no return value.
void readFileEncrypt();
//write the encrypted data to a new file. Function takes a vector of strings, and a vector of ints as parameters, no return value.
void writeFile(vector<string>, vector<int>);

int main() 
{
	bool endPrgm = false;
	while (!endPrgm) 
	{
		int x;
		int end;
		cout << "Press 1 to begin file encryption" << endl;
		cin >> x;
		readFileEncrypt();
		cout << "Process complete press any key to exit" << endl;
		cin >> end;
		endPrgm = true;
	}
	return 0;
}

void readFileEncrypt()
{
	/*Reads name, and id data from a file, encrypts the data, and stores the encrypted name in a vector of strings
	and the encrypted id in a vector of ints. These two vectors are than passes to the write function*/
	fstream file;
	string name;
	string input;
	vector<string> names(1);
	vector<int> ids(1);
	int id;
	file.open("NamesNid.txt");
	if (!file) 
	{
		cout << "File not found!" << endl;
	}
	else 
	{
		while (!file.eof()) 
		{
			getline(file, input); 
			istringstream ss(input);
			ss >> name >> id;
			for (int i = 0; i < name.length(); ++i)
			{
				name[i] = name[i] + 10;
				name[i] = name[i] / 2;
			}
			names.push_back(name);
			id = id + 20;
			id = id / 4;
			ids.push_back(id);
		}
	}
	file.close();
	//calls the write function on the vector of names, and ids to write the encrypted data to a file.
	writeFile(names, ids);
}

void writeFile(vector<string> names, vector<int> ids)
{
	/*Accepts the two vectors containing the encrypted names, and ids and writes the data to a file*/
	ofstream outfile;
	outfile.open("Encrypted.txt");
	for (int i = 1; i < (names.size() - 1); ++i) 
	{
		if (names[i] != "0") 
		{
			outfile << names[i] << " " << ids[i] << endl;
		}
	}
	outfile.close();
	cout << "File encrytion complete" << endl;
}
