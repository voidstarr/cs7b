#include "NumberList2.h" 

//*******************************************
// Returns the number of elements in a list *
// ******************************************
int NumberList2::size(ListNode *aList) const
{
    if (aList == nullptr)
        return 0;
    else
        return 1 + size(aList->next);
}

//*******************************************
// Prints all elements stored in a list     *
//*******************************************
void NumberList2::displayList(ListNode *aList) const
{
    if (aList != nullptr)
    {
        cout << aList->value << "  ";
        displayList(aList->next);
    }
}
//***********************************************
// Adds a value at the end of a list            *
//***********************************************
NumberList2::ListNode *NumberList2::add(ListNode *aList, double value)
{
    if (aList == nullptr)
        return new ListNode(value);
    else
    {
        // add the value to the end of the tail
        aList->next = add(aList->next, value);
        return aList;
    }
}

//*************************************************
// Removes a value from the list and returns      *
// the resulting list                             *
//*************************************************
NumberList2::ListNode *NumberList2::remove(ListNode *aList, double value)
{
    if (aList == nullptr) return nullptr;
    // The list is not empty

    // See if value is first on the list
    // If so, delete the value and return the tail
    if (aList->value == value)
    {
       ListNode *tail = aList->next;
       delete aList;
       return tail;
    }
    else
    {
        // Value is not the first on the list
        // Return the list with the value removed
        // from the tail of the list
        aList->next = remove(aList->next, value);
        return aList;
    }
}

//***********************************
// Destructor                       *
//***********************************
NumberList2::~NumberList2()
{
   ListNode *ptr = head;
   while (ptr != nullptr)
   {
       // Point to the node to be deleted
       ListNode *garbage = ptr;
       // Go on to the next node
       ptr = ptr->next;
       // Delete the current node
       delete garbage;
   }
}