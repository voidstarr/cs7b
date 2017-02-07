#include <iostream>
#include "IntQueue.h"
#include <cstdlib>
using namespace std;

//*************************
// Constructor.           *
//*************************
IntQueue::IntQueue(int s)
{
   queueArray = make_unique<int []>(s);
   queueSize = s;
   front = -1;
   rear = -1;
   numItems = 0;
}


//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
void IntQueue::enqueue(int num)
{
   if (isFull())
   {
      cout << "The queue is full.\n";
      exit(1);
   }
   else
   {
      // Calculate the new rear position
      rear = (rear + 1) % queueSize;      
      // Insert new item
      queueArray[rear] = num;      
      // Update item count
      numItems++;
   }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
void IntQueue::dequeue(int &num)
{
   if (isEmpty())
   {
      cout << "The queue is empty.\n";
      exit(1);
   }
   else
   {
      // Move front
      front = (front + 1) % queueSize;
      // Retrieve the front item
      num = queueArray[front];
      // Update item count		
      numItems--;
   }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
bool IntQueue::isEmpty() const
{
   return numItems == 0;
}

//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise.             *
//********************************************
bool IntQueue::isFull() const
{
   return numItems == queueSize;
}

//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0.         *
//*******************************************
void IntQueue::clear()
{
   front = -1;
   rear = -1;
   numItems = 0;
}