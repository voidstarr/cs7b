#include <memory>
using namespace std;
class IntStack
{
   unique_ptr<int[]>stackArray;
   int capacity;
   int top;
public:
   // Constructor 
   IntStack(int capacity);

   // Member functions
   void push(int value);
   void pop(int &value);
   bool isEmpty() const;

   // Stack Exceptions 
   class Overflow {};
   class Underflow {};
};