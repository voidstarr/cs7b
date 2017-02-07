#include "reliablenumberlist.h"  

//***************************************************
// Copy constructor                                 *
//***************************************************
ReliableNumberList::
ReliableNumberList(const ReliableNumberList& original)
{
    head = copyList(original.head);
}

//****************************************************
// Overloaded Assignment operator                    *
//****************************************************
ReliableNumberList&
ReliableNumberList::operator=(ReliableNumberList right)
{
    // First destroy the linked list in this object
    destroyList(head);
    // Assign a copy of the linked list in other object
    head = copyList(right.head);
}

//****************************************************
// Make a separate copy of the linked list inside    *
// a ReliableNumberList object                       *
//****************************************************
NumberList::ListNode *
ReliableNumberList::copyList(ListNode *aList)
{
    if (aList == nullptr)
        return nullptr;
    else
    {
        // First copy the tail
        ListNode *tailCopy = copyList(aList->next);
        // Return copy of head attached to copy of tail
        return new ListNode(aList->value, tailCopy);
    }
}

//******************************************************
// Destroy a list by deallocating all of its nodes     *
//******************************************************
void ReliableNumberList::destroyList(ListNode *aList)
{
   if (aList != nullptr)
   {
      ListNode *tail = aList->next;
      // Deallocate the head and then destroy the tail
      delete aList;
      destroyList(tail);
   }
}



