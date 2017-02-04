// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "budget3.h" 
using namespace std;

int main()
{
   const int N_DIVISIONS = 4;
   
   // Get the budget requests for the divisions and 
   // offices	
   cout << "Enter the main office's budget request: ";
   double amount;
   cin >> amount;
   Budget::mainOffice(amount);
	
   // Create the division and auxilliary offices
   Budget divisions[N_DIVISIONS];
   Aux auxOffices[N_DIVISIONS];

   cout << "\nEnter the budget requests for the divisions and  "
        << "\ntheir auxiliary offices as prompted:\n"; 
   for (int count = 0; count < N_DIVISIONS; count++)
   {
       double bud;      
       cout <<  "Division " << (count + 1) << ": ";
       cin >> bud;
       divisions[count].addBudget(bud);
       cout << "Division " << (count + 1) << "'s auxiliary office: ";
       cin >> bud;
       auxOffices[count].addBudget(bud);
    }
	 
    // Print the budgets
    cout << setprecision(2);
    cout << showpoint << fixed;
    cout << "Here are the division budget requests:\n";
    for (int count = 0; count < N_DIVISIONS; count++)
    {
       cout << "\tDivision: " << (count + 1) << "\t\t\t$ ";
       cout << setw(7);
       cout << divisions[count].getDivBudget() << endl;
       cout << "\tAuxiliary Office of Division " << (count+1);
       cout << "\t$  ";
       cout << auxOffices[count].getDivBudget() << endl;
    }
    // Print total requests
    cout << "\tTotal Requests (including main office): $ ";
    cout << Budget::getCorpBudget() << endl;
    return 0;
}