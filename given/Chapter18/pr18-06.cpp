// This program demonstrates the DynIntQeue class
#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
   DynIntQueue iQueue;

   cout << "Enqueuing 5 items...\n";

   // Enqueue 5 items
   for (int k = 1; k <= 5; k++)
      iQueue.enqueue(k*k);

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were:\n";
   while (!iQueue.isEmpty())
   {
      int value;
      iQueue.dequeue(value);
      cout << value << "  ";
   }
   return 0;
}