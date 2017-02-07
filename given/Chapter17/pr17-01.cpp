// This program illustrates the creation 
// of linked lists.
#include <iostream>
using namespace std;

struct ListNode
{
  double value;
  ListNode *next;
};

int main()
{
   ListNode *head = nullptr;
   
   // Create first node with 12.5
   head = new ListNode;    // Allocate new node
   head->value = 12.5;     // Store the value
   head->next = nullptr;      // Signify end of list 
	  
   // Create second node with 13.5
   ListNode *secondPtr = new ListNode;
   secondPtr->value = 13.5;
   secondPtr->next = nullptr;  // Second node is end of list                                     
   head->next = secondPtr;     // First node points to second

   // Print the list
   cout << "First item is " << head->value << endl;
   cout << "Second item is " << head->next->value << endl;   
   return 0;
}