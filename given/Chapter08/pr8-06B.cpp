// This program displays the number of days in each month. It uses an
// array of string objects to hold the month names and an int array 
// to hold the number of days in each month. Both are initialized with 
// initialization lists at the time they are created.
// This version of Program 8-6 stores data beginning in array element 1.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int NUM_MONTHS = 12;
	string name[NUM_MONTHS+1] = 
	    { " ",  "January",   "February", "March",    "April",
                "May",       "June",     "July",     "August",
                "September", "October",  "November", "December" };

	int days[NUM_MONTHS+1] = {0, 31, 28, 31, 30,
		    	                 31, 30, 31, 31, 
                                 30, 31, 30, 31};

	for (int month = 1; month <= NUM_MONTHS; month++)
	{
		cout << setw(9) << left << name[month] << " has ";
		cout << days[month] << " days.\n";
	}
	return 0;
}
