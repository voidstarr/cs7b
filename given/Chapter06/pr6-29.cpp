// This program demonstrates overloaded functions to calculate
// the gross weekly pay of hourly-wage or salaried employees.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
char getChoice();
double calcWeeklyPay(int, double); 
double calcWeeklyPay(double);

int main()
{
	char selection;              // Menu selection
	int worked;                  // Weekly hours worked
	double rate,                 // Hourly pay rate
	      yearly;                // Annual salary

	// Set numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	// Display the menu and get a selection
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly-wage employee, or \n";
	cout << "(S) a salaried employee? ";
   selection = getChoice();
	
	// Process the menu selection
	switch (selection)
	{
      // Hourly employee
      case 'H' :
      case 'h' :  cout << "How many hours were worked? ";
                  cin  >> worked;
                  cout << "What is the hourly pay rate? ";
                  cin  >> rate;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay(worked, rate) << endl;
                  break;
						
		// Salaried employee				
      case 'S' :
      case 's' :  cout << "What is the annual salary? ";
                  cin  >> yearly;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay(yearly) << endl;
	}
	return 0;
}

/*****************************************************
 *                    getChoice                      *
 * Accepts and returns user's validated menu choice. *
 *****************************************************/
char getChoice()
{
	char letter;        // Holds user's letter choice
	
	// Get the user's choice
	cin >> letter;

	// Validate the choice
	while (letter != 'H' && letter != 'h' 
	    && letter != 'S' && letter != 's')
	{	
		cout << "Enter H or S: ";
		cin  >> letter;
	}
	// Return the choice
	return letter;
}
	
/*************************************************************
 *            overloaded function calcWeeklyPay              *
 * This function calculates and returns the gross weekly pay *
 * of an hourly-wage employee. Parameters hours and payRate  *
 * hold the number of hours worked and the hourly pay rate.  *
 *************************************************************/
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

/*************************************************************
 *            overloaded function calcWeeklyPay              *
 * This function calculates and returns the gross weekly pay *
 * of a salaried employee. The parameter annSalary holds the *
 * employee's annual salary.                                 *
 *************************************************************/
double calcWeeklyPay(double annSalary)
{
	return annSalary / 52.0;
}
