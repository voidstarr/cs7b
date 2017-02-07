// This program tracks the inventory of two widget stores. 
// It illustrates the use of multiple and combined assignment. 
#include <iostream>
using namespace std;

int main()
{
   int begInv,    // Beginning inventory for both stores
       sold,      // Number of widgets sold
       store1,    // Store 1's inventory
       store2;    // Store 2's inventory
		 
   // Get the beginning inventory for the two stores
   cout << "One week ago, 2 new widget stores opened\n";
   cout << "at the same time with the same beginning\n";
   cout << "inventory. What was the beginning inventory? ";
   cin  >> begInv;
   
   // Set each store's inventory
   store1 = store2 = begInv;
   
   // Get the number of widgets sold at each store
   cout << "How many widgets has store 1 sold? ";
   cin >> sold;
   store1 -= sold;     // Adjust store 1's inventory
   
   cout << "How many widgets has store 2 sold? ";
   cin >> sold;
   store2 -= sold;     // Adjust store 2's inventory
   
   // Display each store's current inventory
   cout << "\nThe current inventory of each store:\n";
   cout << "Store 1: " << store1 << endl;
   cout << "Store 2: " << store2 << endl;
   return 0;
}
