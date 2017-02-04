// This program illustrates recursion on linked lists. 
#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
  {
     double value;
     ListNode *next;
     // Constructor
     ListNode(double value1, ListNode *next1 = nullptr)
     {
       value = value1;
       next = next1;
     }
  };

// Function prototypes
int size(ListNode *);
void displayList(ListNode *);

int main()
{
   ListNode *numberList = nullptr;    // List of numbers
   double number;                  // Used to read the file

   // Open the file
   ifstream numberFile("numberFile.dat");
   if (!numberFile)
   {
        cout << "Error in opening the file of numbers.";
        exit(1);
   }
   // Read the file into a linked list  
   while (numberFile >> number)
   {
      // Create a node to hold this number.
      numberList = new ListNode(number, numberList);
   }
   // Print the list
   cout << endl << "The contents of the list are: " << endl;
   displayList(numberList);

   // Print the size of the list
   cout << endl << "The number of items in the list is: "
        << size(numberList);
   return 0;
}

//*****************************************
// length computes the number of nodes in *
// a linked list                          *
//*****************************************
int size(ListNode *ptr)
{
  if (ptr == nullptr)
    return 0;
  else
   return 1 + size(ptr->next);
}

//*******************************************
// displayList prints all the values stored *
// in the list                              *
//*******************************************
void displayList(ListNode *ptr)
{
  if (ptr != nullptr)  
    {
      cout << ptr-> value << "  ";
      displayList(ptr->next);
    }
}