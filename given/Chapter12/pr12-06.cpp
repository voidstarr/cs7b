// This program uses strcmp to compare the string entered
// by the user with the valid  part numbers. 
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
   // Price of items
   const double A_PRICE = 49.0, B_PRICE = 69.95;
					 
   // Character array for part number			 
   const int PART_LENGTH = 8;
   char partNum[PART_LENGTH];   

   // Instruct the user to enter a part number
   cout << "The computer part numbers are:\n";
   cout << "\tBlu-ray Disk Drive, part number S147-29A\n";
   cout << "\tWireless Router, part number S147-29B\n";
   cout << "Enter the part number of the item you\n";
   cout << "wish to purchase: ";
	
   // Read a part number of at most 8 characters
   cin >> setw(9);	
   cin >> partNum;
	
   // Determine what user entered using strcmp
   // and print its price
   cout << showpoint << fixed << setprecision(2);
   if (strcmp(partNum, "S147-29A") == 0)
      cout << "The price is $" << A_PRICE << endl;
   else if (strcmp(partNum, "S147-29B") == 0)
      cout << "The price is $" << B_PRICE << endl;
   else
      cout << partNum << " is not a valid part number.\n";
		
   return 0;
}