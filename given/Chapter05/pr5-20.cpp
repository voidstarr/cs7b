// This program reads and sums the numeric values stored in a file.
// It reads until the end of the file (EOF) is reached.
#include <string>
#include <iostream>
#include <fstream>             // Needed to use files
using namespace std;

int main()
{
	ifstream inputFile;        // File stream object
	string fileName;           // Holds the user entered file name
	int numValues = 0;         // Counts the number of values read
    double value,              // A single value read
		   total = 0.0;        // Accumulator 
    
    // Prompt the user to enter the data file name
	cout << "This program reads and sums the values in a data file.\n";
	cout << "Enter the name of the file to read from: ";
	cin  >> fileName;

    // Open the input file
    inputFile.open(fileName);
 
    // Loop until the EOF is reached
    while (inputFile >> value)  // If a value was read, execute the 
	{	numValues++;            // loop again to count the value and 
		total += value;         // add it to the total                
	}
    cout << "\nThe total of the " << numValues << " values is "
	     << total << endl;
	
	// Close the file
    inputFile.close();
	return 0;
}
