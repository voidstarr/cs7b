// This program uses the  getline  function to read 
// a line of information from the file.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
    // Variables needed for file input    
    fstream nameFile;
    string input;

    // Open the file
    nameFile.open("murphy.txt", ios::in);
    if (!nameFile) 
    {
        cout << "File open error!" << endl;
        return 0;
    }

    // Read first line of the file
    getline(nameFile, input);
    while (nameFile)    
    {
        // If successful, print line and read another line
        cout << input << endl; 
        getline(nameFile, input);
    }

    // Close the file
    nameFile.close();
    return 0;
}