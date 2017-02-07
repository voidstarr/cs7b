// This program displays a table of July rainfall totals for several
// American cities. It calls a function to read the data from a file 
// one line at a time. The data values are stored in reference
// parameters so they can be seen and used by the main function.
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// Function prototype
bool readData(ifstream &someFile, string &city, double &rain);          

int main()
{
	ifstream inputFile;
	string city;
	double inchesOfRain;

	// Display table headings
	cout << "July Rainfall Totals for Selected Cities \n\n";
	cout << " City     Inches \n";
	cout << "________________ \n";
	
	// Open the data file
	inputFile.open("rainfall.dat");
	if (inputFile.fail())
	   cout << "Error opening data file.\n";
	else
	{   // Call the readData function 
		// Execute the loop as long as it found and read data
		while (readData(inputFile, city, inchesOfRain) == true)  
		{
			cout << setw(11) << left << city;
			cout << fixed << showpoint << setprecision(2) 
				 << inchesOfRain << endl;
		}
	   inputFile.close();
	}
	return 0;
}

/********************************************************
 *                     readData                         *
 * Each time it is called this function reads the next  *
 * one line of data from the input file passed to it.   *
 * It stores the input data in reference variables.     *
 * Then, if it read data, it returns true. If there was *
 * no more data in the file to read, it returns false.  *
 ********************************************************/
bool readData(ifstream &someFile, string &city, double &rain)
{ 
	bool foundData = someFile >> city >> rain;
	return foundData;
}
