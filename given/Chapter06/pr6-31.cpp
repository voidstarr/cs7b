// This program is a driver for testing the showFees function.
#include <iostream>
#include <string>
using namespace std;

// Funtion prototype
void showFees(string, double, int);

int main()
{
	cout << "Calling the showFees function with arguments "
        << "Adult, 120.0, 3.\n";
	showFees("Adult", 120.0, 3);

	cout << "Calling the showFees function with arguments "
        << "Child, 60.0, 2.\n";
	showFees("Child", 60.0, 2);

	cout << "Calling the showFees function with arguments "
        << "Senior, 100.0, 4.\n";
	showFees("Senior", 100.0, 4);

	return 0;
}

/*******************************************************
 *                    showFees                         *
 * This function uses the membership type, monthly     *
 * rate and number of months passed to it as arguments *
 * to compute and print a member's total charges.      *
 *******************************************************/
void showFees(string memberType, double rate, int months)
{
   cout << endl
		  << "Membership Type : "  << memberType << "    "
		  << "Monthly rate $"      << rate   << endl
		  << "Number of months: "  << months << endl
		  << "Total charges   : $" << (rate * months)
		  << endl << endl;
}
