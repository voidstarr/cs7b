// This program calculates gross pay. It uses global constants.
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const double PAY_RATE = 22.55;     // Hourly pay rate
const double BASE_HOURS = 40.0;    // Max non-overtime hours
const double OT_MULTIPLIER = 1.5;  // Overtime multiplier

// Function prototypes
double getBasePay(double);
double getOvertimePay(double);

int main()
{
   double hours,                  // Hours worked
	       basePay,               // Base pay
	       overtimePay = 0.0,     // Overtime pay
	       totalPay;              // Total pay 
          
   // Get the number of hours worked
   cout << "How many hours did you work? ";
   cin  >> hours;
   
   // Get the amount of base pay
   basePay = getBasePay(hours);
   
   // Get overtime pay, if any
   if (hours > BASE_HOURS)
      overtimePay = getOvertimePay(hours);
   
   // Calculate the total pay
   totalPay = basePay + overtimePay;
   
   // Display the pay
   cout << setprecision(2) << fixed << showpoint;
   cout << "Base pay     $" << setw(7) << basePay     << endl;
   cout << "Overtime pay $" << setw(7) << overtimePay << endl;
   cout << "Total pay    $" << setw(7) << totalPay    << endl;
   return 0;
}

/***************************************************************
 *                           getBasePay                        *
 * This function uses the hours worked value passed in to      *
 * compute and return an employee's pay for non-overtime hours.*
 ***************************************************************/
double getBasePay(double hoursWorked)
{
   double basePay;  
   
  	if (hoursWorked > BASE_HOURS)
      basePay = BASE_HOURS * PAY_RATE;
   else
      basePay = hoursWorked * PAY_RATE;

   return basePay;
}

/********************************************************
 *                       getOvertimePay                 *
 * This function uses the hours worked value passed in  *
 * to compute and return an employee's overtime pay.    *
 ********************************************************/
double getOvertimePay(double hoursWorked)
{
   double overtimePay;  
   
   if (hoursWorked > BASE_HOURS)
   {
      overtimePay = 
	     (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
   }
   else
      overtimePay = 0.0;

   return overtimePay;
}
