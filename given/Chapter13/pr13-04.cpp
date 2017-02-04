// This program demonstrates the return value of
// the stream object error testing member functions. 
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
void showState(fstream &);

int main()
{
    // Open a file, write a number, and show file status
    fstream testFile("stuff.dat", ios::out);
    if (testFile.fail())
    {
        cout << "cannot open the file.\n";
        return 0;
    }
    int num = 10;
    cout << "Writing to the file.\n";
    testFile << num;
    showState(testFile);
    testFile.close();

    // Open the same file, read the number, show status
    testFile.open("stuff.dat", ios::in);
    if (testFile.fail())
    {
        cout << "cannot open the file.\n";
        return 0;
    }
    cout << "Reading from the file.\n";
    testFile >> num;
    showState(testFile);

    // Attempt an invalid read, and show status
    cout << "Forcing a bad read operation.\n";
    testFile >> num;
    showState(testFile);

    // Close file and quit.
    testFile.close();
    return 0;
}

//*********************************************************
// Definition of function showState. This function uses   *
// an fstream reference as its parameter. The return      *
// values of the eof(), fail(), bad(), and good() member  *
// functions is displayed. The clear() function is called *
// before the function returns.                           *
//*********************************************************
void showState(fstream &file)
{
    cout << "File Status:\n";
    cout << "  eof bit: " << file.eof() << endl;
    cout << "  fail bit: " << file.fail() << endl;
    cout << "  bad bit: " << file.bad() << endl;
    cout << "  good bit: " << file.good() << endl;
    file.clear(); // Clear any bad bits
}