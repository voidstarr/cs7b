#include <iostream>

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
        this->next = nullptr;
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
    ~MyQueue();
    
    void enqueue(int);
    int dequeue();
    bool isEmpty() const {return front == nullptr;}
    void print();

};

MyQueue::~MyQueue() {
    delete front;
}

MyQueue::MyQueue() {
    front = nullptr;
    rear = nullptr;
}

void MyQueue::enqueue(int e) {
    QNode *tmp = new QNode(e);
    if (isEmpty()) {
        front = rear = tmp;
    } else {
        rear->next = tmp;
        rear = tmp;
    }
}

int MyQueue::dequeue() {
    if(isEmpty()){
        std::cout << "Nothing to dequeue. exiting." << std::endl;
        exit(1);
    }

    QNode *tmp = front;
    if (front == rear) {
        front = rear = nullptr;
    } else {
        front = front->next;
    }

    tmp->next = nullptr;
    delete tmp;

    return tmp->value;
}

void MyQueue::print() {
    QNode *tmp = front;
    while (tmp != nullptr) {
        std::cout << tmp->value << " ";
    }
    tmp = tmp->next;
    std::cout << std::endl;
}

int main() {
    MyQueue q;
    q.enqueue(4);
    q.enqueue(443);
    q.enqueue(74);
    q.enqueue(864);
    q.enqueue(314);
    q.enqueue(654);

    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    return 0;
}
