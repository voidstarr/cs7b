#include <iostream>

class MyQueue {
    private:
       int *queueArray;
       int front;
       int rear;
       int numItems;
       int queueSize;

    public:
       MyQueue(int);
       ~MyQueue();

       void enqueue(int);
       int dequeue();
       bool isEmpty() const {return numItems == 0;};
       bool isFull() const {return numItems == queueSize;};
       void clear();
};

MyQueue::MyQueue(int size) {
    this->queueArray = new int[size];
    this->numItems = 0;
    this->front = -1;
    this->rear = -1;
    this->queueSize = size;
}

MyQueue::~MyQueue() {
    delete [] queueArray;
}

int MyQueue::dequeue() {
    if(isEmpty()) {
        std::cout << "queue empty" << std::endl;
        exit(1);
    }
    
    front = (front + 1) % queueSize;
    numItems--;
    return queueArray[front];
}

void MyQueue::enqueue(int e) {
    if (isFull()) {
        std::cout << "queue full" << std::endl;
        exit(1);
    }
    
    rear = (rear + 1) % queueSize;
    this->queueArray[rear] = e;
    numItems++;
    
}

void MyQueue::clear() {
    front = -1;
    rear = -1;
    numItems = 0;
}

int main() {
    MyQueue iq(5);
    for (int i = 0; i<5;i++)
        iq.enqueue(i);

    for(int i = 0; i < 5; i++)
        std::cout << iq.dequeue() << std::endl;
    return 0;
}
