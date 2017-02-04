// This program demonstrates file merging and the use 
// of CSS to determine text colors in HTML documents. 
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// This subclass of fstream adds the ability to
// write a string that is automatically embedded
// in an HTML span element with a color specification
// style.
class ColorCodedStream : public fstream
{
public:
    void writeInColor(string str, string  aColor)
    {
        *this << "<span style = \"color:" + aColor + "\"> ";
        *this << str << " <br/> ";
        *this << "</span>\n";
    }
};

void openFile(fstream &file, string descr); // Prototype

int main()
{
    ColorCodedStream outputFile;
    fstream blackFile, blueFile;
    openFile(blackFile, "black");
    openFile(blueFile, "blue");
    openFile(outputFile, "output");

    string blackInput, blueInput;
    // read the first line from each file
    getline(blackFile, blackInput);   // Read black file into buffer
    getline(blueFile, blueInput); // Read blue file into buffer

    while (blackFile || blueFile)
    {
        if (blackFile &&  blueFile)
        {
            // Both buffers are have fresh data
            if (blackInput <= blueInput)
            {
                outputFile.writeInColor(blackInput, "black");
                getline(blackFile, blackInput);
            }
            else
            {
                outputFile.writeInColor(blueInput, "blue");
                getline(blueFile, blueInput);
            }
        }
        if (blackFile && !blueFile)
        {
            // Only blackInput is good
            outputFile.writeInColor(blackInput, "black");
            getline(blackFile, blackInput);
        }
        if (blueFile && !blackFile)
        {
            // Only blueInput is good
            outputFile.writeInColor(blueInput, "blue");
            getline(blueFile, blueInput);
        }
    }
    return 0;
}
//********************************************************************
// Opens a specified file for reading or writing. The descr argument *
// is used in prompting for the name of the file.                    *
//********************************************************************
void openFile(fstream &file, string descr)
{
    string fileName;
    cout << "Enter the  name of the " << descr << " file: ";
    cin >> fileName;

    // Determine whether the file should be opened for reading
    // or writing based on the description (descr)
    if (descr == "output")
        file.open(fileName.data(), ios::out);
    else
        file.open(fileName.data(), ios::in);

    // Check if file open was successful
    if (!file)
    {
        cout << "Cannot open the file " << fileName;
        exit(1);
    }
}
