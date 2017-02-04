#include <iostream>
#include "DynIntStack.h"
#include <cstdlib>
using namespace std;

//**************************************************
// Member function push pushes the argument onto   *
// the stack.                                      *
//**************************************************
void DynIntStack::push(int num)
{
   top = new StackNode(num, top);
}

//*****************************************************
// Member function pop removes the value at the top   *
// of the stack and copies it into the variable       *
// passed as an argument.                             *
//*****************************************************
void DynIntStack::pop(int &num)
{
   StackNode *temp;

   if (isEmpty()) { throw DynIntStack::Underflow(); }
   else  
   {
      // Pop value off top of stack      
      num = top->value;
      temp = top;
      top = top->next;
      delete temp;
   }
}

//*****************************************************
// Member function isEmpty returns true if the stack  *
// is empty, or false otherwise.                      *
//*****************************************************
bool DynIntStack::isEmpty() const
{
   return top == nullptr;
}

//*****************************************************
// Destructor.                                        *
//*****************************************************
DynIntStack::~DynIntStack()
{
   StackNode * garbage = top;
   while (garbage != nullptr)
   {
      top = top->next;
      garbage->next = nullptr;
      delete garbage;
      garbage = top;
   }
  
}