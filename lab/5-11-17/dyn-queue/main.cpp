#inlcude <iostream>

class QNode {
friend class MyQueue;
private:
    QNode *next;
    int value;
public:
    QNode(int value, QNode *next) {
        this->next = next;
        this->value = value;
    }
    QNode(int value){
        this->value = value;
    }
    ~QNode() {
        if(next != nullptr)
            delete next;
    }
};

class MyQueue {
private:
    QNode *front;
    QNode *rear;

public:
    MyQueue();
    MyQueue();
    ~MyQueue();
    
    void enqueue();
    int dequeue();
};
MyQueue::~MyQueue() {
    delete front;
    delete rear;
}
MyQueue::MyQueue() {
    front = nullptr;
    rear = nullptr;
}

void MyQueue::enqueue(int e) {
    if (rear == nullptr) {
        front = rear = new QNode(e);
    } else {
        rear = 
        front = new QNode(e, front);

    }
}

int MyQueue::dequeue() {
    return 0;
}

int main() {
    return 0;
}
