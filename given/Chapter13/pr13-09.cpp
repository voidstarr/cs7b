// This program demonstrates the peek member function. 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // Variables needed to read characters and numbers 
    char ch;
    int number;  
    
    // Variables for file handling
    string fileName;
    fstream inFile, outFile;       

    // Open the file to be modified
    cout << "Enter a file name: ";
    cin >> fileName;
    inFile.open(fileName.c_str(), ios::in);
    if (!inFile)
    {
       cout << "Cannot open file " <<  fileName;
       return 1;
    }
    // Open the file to receive the modified copy
    outFile.open("modified.txt", ios::out);
    if (!outFile)
    {
        cout << "Cannot open the outpur file.";
        return 2;
    }
    // Copy the input file one character at a time
    // except numbers in the input file must have 1
    // added to them

    // Peek at the first character
    ch = inFile.peek();
    while (ch != EOF)
    {
        // Examine current character
        if (isdigit(ch))
        {
            // numbers should be read with >>
            inFile >> number;
            outFile << number + 1;
        }
        else
        {
            // just a simple character, read it and copy it
            ch = inFile.get();
            outFile << ch;
        }
        // Peek at the next character from input file
        ch = inFile.peek();
    }
    // Close the files
    inFile.close();
    outFile.close();
    return 0;
}
    