// This program demonstrates the seekg function.  
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // Variable to access file
    char ch;
	
    // Open the file for reading
    fstream file("letters.txt", ios::in);
    if (!file) 
    {
        cout << "Error opening file.";
        return 0;
    }

    // Get fifth byte from beginning of alphabet file
    file.seekg(5L, ios::beg);
    file.get(ch);
    cout << "Byte 5 from beginning: " << ch << endl;

    // Get tenth byte from end of alphabet file
    file.seekg(-10L, ios::end);
    file.get(ch);
    cout << "Byte 10 from end: " << ch << endl;

    // Go forward three bytes from current position
    file.seekg(3L, ios::cur);
    file.get(ch);
    cout << "Byte 3 from current: " << ch << endl;

    // Close file
    file.close();
    return 0;
}