class DynIntQueue
{
   struct QueueNode
   {      
      int value;
      QueueNode *next;
      QueueNode(int value1, QueueNode *next1 = nullptr)
      {
         value = value1;
         next = next1;
      }
   };
   // These track the front and rear of the queue
   QueueNode *front;
   QueueNode *rear;
public:
   // Constructor and Destructor
   DynIntQueue();
   ~DynIntQueue();

   // Member functions
   void enqueue(int);
   void dequeue(int &);
   bool isEmpty() const;
   void clear();
};

