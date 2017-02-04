#include <iostream>
using namespace std; 
class NumberList
{
protected:
    // Declare a class for the list node
    struct ListNode
    {
       double value;
       ListNode *next;
       ListNode(double value1, ListNode *next1 = nullptr)
       {
          value = value1;
          next = next1;
       }      
    };
    ListNode *head;                   // List head pointer
public:
    NumberList() { head = nullptr;  }    // Constructor
    ~NumberList();                    // Destructor
    void add(double number);
    void remove(double number);
    void displayList() const;
};

