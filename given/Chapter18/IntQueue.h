#include <memory>
using namespace std;
class IntQueue
{
private:
   unique_ptr<int []> queueArray;
   int queueSize;
   int front;
   int rear;
   int numItems;
public:
   IntQueue(int);
 
   void enqueue(int);
   void dequeue(int &);
   bool isEmpty() const;
   bool isFull() const;
   void clear();
};

