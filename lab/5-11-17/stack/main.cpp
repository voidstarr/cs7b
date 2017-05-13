#include <iostream>

template <class T>
class MyStack {
    private:
        T* stackArray;
        int size;
        int top;
    public:
        MyStack();
        MyStack(int);
        
        ~MyStack();

        T pop();
        void push(T);
        bool isEmpty() const {return top == 0;};
        class OverFlow{};
        class UnderFlow{};
};

int main() {
    MyStack<std::string> stackeroo(10);
    stackeroo.push("fuck");
    stackeroo.push("succ");
    stackeroo.push("wtfuck");
    stackeroo.push("yaboi");
    stackeroo.push("jklol");

    std::cout << stackeroo.pop() << std::endl;
    std::cout << stackeroo.pop() << std::endl;
    std::cout << stackeroo.pop() << std::endl;
    std::cout << stackeroo.pop() << std::endl;
    std::cout << stackeroo.pop() << std::endl;

    return 0;
}

template <class T>
MyStack<T>::~MyStack() {
    delete[] this->stackArray;
}

template <class T>
void MyStack<T>::push(T e) {
    if (top == size)
        throw new OverFlow();
    
    this->stackArray[top++] = e;
}

template<class T>
T MyStack<T>::pop() {
    if (top == 0)
        throw new UnderFlow();
    
    return this->stackArray[--top];
}

template<class T>
MyStack<T>::MyStack() {
    this->stackArray = nullptr;
    this->size = 0;
    this->top = 0;

}

template<class T>
MyStack<T>::MyStack(int size) {
    this->size = size;
    this->stackArray = new T[size];
    this->top = 0;
}
