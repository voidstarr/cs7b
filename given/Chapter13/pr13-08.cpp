// This program demonstrates the use of the get member 
// functions of the istream class
#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

int main()
{
    // Variables needed to read file one character at a time
    string fileName;
    fstream file;
    char ch;     // character read from the file   

    // Get file name and open file
    cout << "Enter a file name: ";
    cin >> fileName;
    
    file.open(fileName, ios::in);
    if (!file)
    {
        cout << fileName << " could not be opened.\n";
        exit(1);
    }

    // Read file one character at a time and echo to screen
    ch = file.get();
    while (ch != EOF)
    {
        cout << ch;
        ch = file.get();
    }

    // Close file
    file.close();    
    return 0;
}

