// This program uses a partially-filled array to store monthly sales 
// figures for a set of offices. It then finds and displays the total
// sales amount, the average sales amount, and a listing of the offices
// with sales below the average. The data to fill the array is read
// in from a file and the number of data values are counted.
#include <iostream>
#include <fstream>            // Needed to use files
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 20;
	ifstream dataIn;          // Object to read file input
	int numOffices,           // Number of data values read in
	    count;                // Loop counter
	double sales[SIZE],       // Array to hold the sales data
	       totalSales = 0.0,  // Accumulator initialized to zero
		   averageSales;      // Average sales for all offices

	// Open the data file
	dataIn.open("sales.dat");
	if (!dataIn)
		cout << "Error opening the data file.\n";
	else
	{   // Read values from the file and store them in the array,
		// counting them and summing them as they are read in
		count = 0;
		while (count < SIZE && dataIn >> sales[count])
		{   totalSales += sales[count];
		    count++;
		}
		numOffices = count;
		dataIn.close();

		// Calculate average sales
		averageSales = totalSales / numOffices;

		// Display total and average
		cout << fixed << showpoint << setprecision(2);
		cout << "The total sales are   $"
			 << setw(9) << totalSales << endl;
		cout << "The average sales are $" 
			 << setw(9) << averageSales << endl;

		// Display figures for offices performing below the average
		cout << "\nThe following offices have below-average "
			 << "sales figures.\n";	
		for (int office = 0; office < numOffices; office++)
		{	if (sales[office] < averageSales)
		        cout << "Office "     << setw(2) << (office + 1) 
				     << " $" << sales[office] << endl;
		}
	}
	return 0;
}
