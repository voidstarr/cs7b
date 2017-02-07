// This file demonstrates the getline function with a 
// user-specified delimiter.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
    // Variable needed to read file   
    string input;

    // Open the file.
    fstream dataFile("addresses.txt", ios::in);
    if (!dataFile) 
    {
        cout << "Error opening file.";
        return 0;
    }

    // Read lines terminated by '$' sign and output
    getline(dataFile, input, '$');
    while (!dataFile.fail()) 
    {
        cout << input << endl;
        getline(dataFile, input, '$');
    }

    // Close the file
    dataFile.close();
    return 0;
}