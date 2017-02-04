// This program displays the number of days in each month.
// This version of Program 8-5 stores data beginning in array element 1.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_MONTHS = 12;
	int days[NUM_MONTHS+1];

	days[0]  = 0;   // Dummy value. Not used.
    days[1]  = 31;  // January
	days[2]  = 28;  // February
	days[3]  = 31;  // March
	days[4]  = 30;  // April
	days[5]  = 31;  // May
	days[6]  = 30;  // June
	days[7]  = 31;  // July
	days[8]  = 31;  // August
	days[9]  = 30;  // September
	days[10] = 31;  // October
	days[11] = 30;  // November
	days[12] = 31;  // December

	for (int month = 1; month <= NUM_MONTHS; month++)
	{
		cout << "Month " << setw(2) << month << " has ";
		cout << days[month] << " days.\n";
	}
	return 0;
}
