// This program determines whether or not an applicant qualifies
// for a loan. It demonstrates late variable declaration, and
// even has a variable defined in an inner block.
#include <iostream>
using namespace std;
 
int main()
{
   // Constants for minimum income and years
   const double MIN_INCOME = 35000.0;
   const int MIN_YEARS = 5;
 
   // Get the annual income
   cout << "What is your annual income? ";
 
   double income;       // Variable definition
   cin >> income;
   
   if (income >= MIN_INCOME)
   {
      // Income is high enough, so get years at current job
      cout << "How many years have you worked at your current job? ";

      int years;        // Variable defined inside the if block
      cin >> years;
      
      if (years > MIN_YEARS)
         cout << "\nYou qualify.\n";
      else
         cout << "\nYou must have been employed for more than "
              << MIN_YEARS << " years to qualify.\n";
   }
   else                 // Income is too low
   {
      cout << "\nYou must earn at least $" << MIN_INCOME
           << " to qualify.\n";
   }
   return 0;
}
