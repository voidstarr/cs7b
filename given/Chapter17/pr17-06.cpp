// This program demonstrates the linked list template 
// being used to create a linked list of strings.
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
      LinkedList<string> list;

   	// Build the list
      list.add("Alice");
      list.add("Chuck");
      list.add("Elaine");
      list.add("Fran");

      cout << "Here are the initial names:\n";
      list.displayList();
      cout << "\n\n";

      cout << "Now removing Elaine.\n\n";
      list.remove("Elaine");
      cout << "Here are the remaining elements.\n";
      list.displayList();
      cout << endl;

      return 0;
}