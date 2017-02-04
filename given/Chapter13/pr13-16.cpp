// This program demonstrates the tellg function. 
#include <iostream>
#include <fstream>
#include <cctype>	// For toupper
using namespace std;

int main() 
{   
    // Variables used to read the file
    long offset;
    char ch;
    char response; //User response

    // Create the file object and open the file
    fstream file("letters.txt", ios::in);
    if (!file) 
    {
        cout << "Error opening file.";
        return 0;
    }
    // Work with the file
    do 
    {
        // Where in the file am I?
        cout << "Currently at position "  
             << file.tellg() << endl;

        // Get a file offset from the user.
        cout << "Enter an offset from the " 
             <<  "beginning of the file: ";
        cin >> offset;

        // Read the character at the given offset
        file.seekg(offset, ios::beg);
        file.get(ch);
        cout << "Character read: " << ch << endl;
        cout << "Do it again? ";
        cin >> response;
    } while (toupper(response) == 'Y');
    file.close();
    return 0;
}