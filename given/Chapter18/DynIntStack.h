class DynIntStack
{
   struct StackNode
   {     
      int value;
      StackNode *next;
      // Constructor
      StackNode(int value1, StackNode *next1 = NULL)
      {
         value = value1;
         next = next1;
      }
   };
   StackNode *top;
public:
   DynIntStack() { top = nullptr; }
   ~DynIntStack();
   void push(int);
   void pop(int &);
   bool isEmpty() const;

   // Stack Exception
   class Underflow {};
};

