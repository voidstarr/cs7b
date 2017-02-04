// This program illustrates the NumberList append, 
// insert, and displayList member functions.
#include "SortedNumberList.h"

int main()
{
   SortedNumberList list;

   // Add elements in order
   list.add(2.5);
   list.add(7.9);
   list.add(12.6);
   // Add a value that should go in the middle of the list
   list.add(10.5);
   // Display the list
   list.displayList();
   cout << endl;
   return 0;
}