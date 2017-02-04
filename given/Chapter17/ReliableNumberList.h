#include "numberlist.h" 

class ReliableNumberList : public NumberList 
{
public:
    // Copy constructor
    ReliableNumberList(const ReliableNumberList& original);
    // Now we need a default constructor
    ReliableNumberList(){}
    // Assignment operator
    ReliableNumberList& operator=(ReliableNumberList right);
private:
    static ListNode* copyList(ListNode *aList);
    static void destroyList(ListNode *aList);
};

