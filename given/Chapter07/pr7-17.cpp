// This client program uses the Account class to perform simple
// banking operations. This file should be combined into a
// project along with the Account.h and Account.cpp files.
#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

// Function prototypes
void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
	const char MAX_CHOICE = '7';
	Account savings;             // Account object to model savings account
	char choice;

	cout << fixed << showpoint << setprecision(2);
	do
	{
		displayMenu();
		choice = getChoice(MAX_CHOICE);  // This returns only '1' - '7'
		switch(choice)
		{
			case '1': cout << "The current balance is $";
				      cout << savings.getBalance() << endl;
					  break;
			case '2': cout << "There have been ";
				      cout << savings.getTransactions()
					       << " transactions.\n";
					  break;
		    case '3': cout << "Interest earned for this period: $";
				      cout << savings.getInterest() << endl;
					  break;
		    case '4': makeDeposit(savings);
				      break;
		    case '5': withdraw(savings);
				      break;
		    case '6': savings.calcInterest();
				      cout << "Interest added.\n";
	    }
	} while(choice != '7');
	return 0;
}

/****************************************************************
 *                        displayMenu                           *
 * This function displays the user's menu on the screen.        *
 ****************************************************************/
void displayMenu()
{
   cout << "\n\n                MENU\n\n";
   cout << "1) Display the account balance\n";
   cout << "2) Display the number of transactions\n";
   cout << "3) Display interest earned for this period\n";
   cout << "4) Make a deposit\n";
   cout << "5) Make a withdrawal\n";
   cout << "6) Add interest for this period\n";
   cout << "7) Exit the program\n\n";
   cout << "Enter your choice: ";
}

/*****************************************************************
 *                            getChoice                          *
 * This function gets, validates, and returns the user's choice. *
 *****************************************************************/
char getChoice(char max)
{
	char choice = cin.get();
	cin.ignore();           // Bypass the '\n' in the input buffer
	
	while (choice < '1' || choice > max)
	{
		cout << "Choice must be between 1 and " << max << ". "
		     << "Please re-enter choice: ";
		choice = cin.get();
		cin.ignore();       // Bypass the '\n' in the input buffer
	}
	return choice;
}
 
/****************************************************************
 *                        makeDeposit                           *
 * This function accepts a reference to an Account object.      *
 * The user is prompted for the dollar amount of the deposit,   *
 * and the makeDeposit member of the Account object is          *
 * then called.                                                 *
 ****************************************************************/
void makeDeposit(Account &account)
{
   double dollars;

   cout << "Enter the amount of the deposit: ";
   cin  >> dollars;
   cin.ignore();
   account.makeDeposit(dollars);
}

/****************************************************************
 *                        withdraw                              *
 * This function accepts a reference to an Account object.      *
 * The user is prompted for the dollar amount of the withdrawal,*
 * and the withdraw member of the Account object is then called.*
 ****************************************************************/
void withdraw(Account &account)
{
   double dollars;

   cout << "Enter the amount of the withdrawal: ";
   cin  >> dollars;
   cin.ignore();
   if (!account.withdraw(dollars))
	   cout << "ERROR: Withdrawal amount too large.\n\n";
}
