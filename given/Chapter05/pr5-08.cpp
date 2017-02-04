// This program takes daily sales figures for 
// a 5-day sales week and calculates their total. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DAYS = 5;
	int day;                    // The day being processed
	double dailySales,          // The sales amount for a single day
	       totalSales = 0.0;    // Accumulator, initialized with 0

	// Get the sales for each day and accumulate a total 
	// The loop control variable, day, is a counter
	day = 1; 
	while (day <= NUM_DAYS)
	{		                                  
		cout << "Enter the sales for day " << day << ": ";
		cin  >> dailySales;
		totalSales = totalSales + dailySales;  // Accumulate the total
		day++;                                 // Increment the counter
	}
	// Display the total sales
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal sales: $" << totalSales << endl;

	return 0;
}
