// This menu-driven Health Club membership program carries out the 
// appropriate actions based on the menu choice entered. A do-while loop
// allows the program to repeat until the user selects menu choice 4.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants for membership rates
	const double ADULT_RATE  = 120.0;
	const double CHILD_RATE  = 60.0;
	const double SENIOR_RATE = 100.0;
	
	int choice;           // Menu choice
	int months;           // Number of months
	double charges;       // Monthly charges
	
	do
	{   // Display the menu and get the user's choice
		cout << "\n   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin  >> choice;
		
		// Validate the menu selection
		while ((choice < 1) || (choice > 4))
		{
			cout << "Please enter 1, 2, 3, or 4: ";
			cin  >> choice;
		}
		// Process the user's choice
		if (choice != 4)
		{	cout << "For how many months? ";
			cin  >> months;
			
			// Compute charges based on user input
			switch (choice)
			{
				case 1: charges = months * ADULT_RATE;
				        break;
				case 2: charges = months * CHILD_RATE;
				        break;
				case 3: charges = months * SENIOR_RATE;
			}
			// Display the monthly charges
			cout << fixed << showpoint << setprecision(2);
			cout << "The total charges are $" << charges << endl;
		}
	} while (choice != 4); // Loop again if the user did not
	                       // select choice 4 to quit
	return 0;
}
