#include <iostream>

template <class T> class StackNode {
  template <class U> friend class MyStack;

private:
  T value;
  StackNode *next;

public:
  StackNode(T value) {
    this->value = value;
    this->next = nullptr;
  }
  StackNode(T value, StackNode *next) {
    this->value = value;
    this->next = next;
  }
  ~StackNode() {
    if (next != nullptr)
      delete next;
  }

  class UnderFlow {};
};

template <class T> class MyStack {
private:
  StackNode<T> *top;

public:
  MyStack();
  ~MyStack();
  void push(T);
  T pop();
  class UnderFlow {};
};

template <class T> MyStack<T>::MyStack() { top = nullptr; }

template <class T> MyStack<T>::~MyStack() { delete top; }

template <class T> void MyStack<T>::push(T e) {
  top = new StackNode<T>(e, top);
}

template <class T> T MyStack<T>::pop() {
  if (top == nullptr)
    throw new UnderFlow();

  StackNode<T> *tmp = top;
  T val = tmp->value;
  top = top->next;
  tmp->next = nullptr;
  delete tmp;
  return val;
}

int main() {
  MyStack<int> st;
  st.push(57754);
  st.push(544);
  st.push(52544);
  st.push(58455);
  st.push(5445);
  st.push(5447);

  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;

  return 0;
}
