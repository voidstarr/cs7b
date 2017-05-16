#include <iostream>

template <class T>
class QNode {

template <class K>
friend class MyQueue;
private:
    QNode<T> *next;
    T value;
public:
    QNode(T value, QNode *next) {
        this->next = next;
        this->value = value;
    }
    QNode(T value){
        this->value = value;
        this->next = nullptr;
    }
    ~QNode() {
        if(next != nullptr)
            delete next;
    }
};

template <class T>
class MyQueue {
private:
    QNode<T> *front;
    QNode<T> *rear;

public:
    MyQueue();
    ~MyQueue();
    
    void enqueue(T);
    T dequeue();
    bool isEmpty() const {return front == nullptr;}
    void print();

};

template <class T>
MyQueue<T>::~MyQueue() {
    delete front;
}

template <class T>
MyQueue<T>::MyQueue() {
    front = nullptr;
    rear = nullptr;
}

template <class T>
void MyQueue<T>::enqueue(T e) {
    QNode<T> *tmp = new QNode<T>(e);
    if (isEmpty()) {
        front = rear = tmp;
    } else {
        rear->next = tmp;
        rear = tmp;
    }
}

template <class T>
T MyQueue<T>::dequeue() {
    if(isEmpty()){
        std::cout << "Nothing to dequeue. exiting." << std::endl;
        exit(1);
    }

    QNode<T> *tmp = front;
    T ret = front->value;
    if (front == rear) {
        front = rear = nullptr;
    } else {
        front = front->next;
    }

    tmp->next = nullptr;
    delete tmp;

    return ret;
}

template <class T>
void MyQueue<T>::print() {
    QNode<T> *tmp = front;
    while (tmp != nullptr) {
        std::cout << tmp->value << " ";
    }
    tmp = tmp->next;
    std::cout << std::endl;
}

int main() {
    MyQueue<long> q;
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
    std::cout << q.dequeue() << std::endl;
    
    return 0;
}
