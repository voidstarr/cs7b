// This program sums the numeric values stored in a file.
// It lets the user specify the name of the file, as well as
// the number of values to read from it.
#include <string>
#include <iostream>
#include <fstream>             // Needed to use files
using namespace std;

int main()
{
	ifstream inputFile;        // File stream object
	string fileName;           // Holds the user entered file name
	int numValues;             // Number of values to read
    double value,              // A single value read
		   total = 0.0;        // Accumulator 
    
    // Prompt the user to enter the data file name
	cout << "This program reads and sums the values in a data file.\n";
	cout << "Enter the name of the file to read from: ";
	cin  >> fileName;

	// Get the number values to read
    cout << "How many values are stored in your file? ";
    cin  >> numValues;
 
    // Open the input file
    inputFile.open(fileName);
 
    // Loop once for each piece of data to read
    for (int count = 1; count <= numValues; count++)
    {
       // Read a value from the file and add it to the sum
       inputFile >> value;
       total += value; 
    }
    cout << "\nThe total of the " << numValues << " values is "
	     << total << endl;
	
	// Close the file
    inputFile.close();
	return 0;
}
