// This program is used by Green Fields Landscaping to compute the 
// number of cubic yards of mulch a customer needs and its price.
#include <iostream>
#include <iomanip>
using namespace std;

const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
   double squareFeet;    // square feet of land to be covered
   int    depth;         // inches deep the mulch is to be spread
   double cubicFeet,     // number of cubic feet of mulch needed  
          cubicYards,    // number of cubic yards of mulch needed
          totalPrice;    // total price for all the cubic yards ordered

   // Get inputs
   cout << "Number of square feet to be covered with mulch: ";
   cin  >> squareFeet;
   cout << "Number of inches deep: ";
   cin  >> depth;

   // Perform calculations
   cubicFeet = squareFeet * (depth / 12.0);
   cubicYards = cubicFeet / 27;
   totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

   // Display outputs
   cout << "\nNumber of cubic yards needed: " << cubicYards << endl;
   cout << fixed << showpoint << setprecision(2);
   cout << "Price per cubic yard: $" << setw(7)
	    << PRICE_PER_CUBIC_YD << endl;
   cout << "Total price:          $" << setw(7)
	    << totalPrice << endl << endl;
   return 0;
}
