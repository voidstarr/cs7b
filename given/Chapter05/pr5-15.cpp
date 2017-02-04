// This program calculates DVD rental charges where every third DVD
// is free. It illustrates the use of the continue statement.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numDVDs;         // Number of DVDs being rented
	double total = 0.0;  // Accumulates total charges for all DVDs
	char current;        // Current release? (Y/N)
	
	// Get number of DVDs rented
	cout << "How many DVDs are being rented? ";
	cin  >> numDVDs;
	
	// Determine the charges
	for (int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
	{	if (dvdCount % 3 == 0)   // If it's a 3rd DVD it's free
		{
			cout << "DVD #" << dvdCount << " is free!\n";
			continue;
		}
		cout << "Is DVD #" << dvdCount << " a current release (Y/N)? ";
		cin  >> current;
		if ((current == 'Y') || (current == 'y'))
			total += 3.50;
		else
			total += 2.50;
	} 
	// Display the total charges
	cout << fixed << showpoint << setprecision(2);
	cout << "The total is $" << total << endl;
	return 0;
}
