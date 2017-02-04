// This program uses a two-dimensional array. The
// data stored in the array is read in from a file.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;           // Number of divisions
	const int NUM_QTRS = 4;           // Number of quarters
	double sales[NUM_DIVS][NUM_QTRS]; // 2D array with 3 rows & 4 columns
	double totalSales = 0;	          // Accumulates total sales
	int div, qtr;			          // Loop counters
	ifstream inputFile;               // Used to read data from a file

	inputFile.open("sales2.dat");
	if (!inputFile)
		cout << "Error opening data file.\n";
	else
	{	
		cout << fixed << showpoint << setprecision(2); 
		cout << "Quarterly Sales by Division\n\n";

		// Nested loops are used to fill the array with quarterly
		// sales figures for each division and to display the data
		for (div = 0; div < NUM_DIVS; div++)
		{	for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				cout << "Division "  << (div + 1) 
					 << ", Quarter " << (qtr + 1) << ": $";
				inputFile >> sales[div][qtr];
				cout << sales[div][qtr] << endl;
			}
			cout << endl; // Print blank line
		}
		inputFile.close();
		
		// Nested loops are used to add all the elements
		for (div = 0; div < NUM_DIVS; div++)
		{	for (qtr = 0; qtr < NUM_QTRS; qtr++)
				totalSales += sales[div][qtr];
		}
		// Display the total
		cout << "The total sales for the company are: $";
		cout << totalSales << endl;
	}
	return 0;
}
