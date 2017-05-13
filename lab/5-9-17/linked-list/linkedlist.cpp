#include "linkedlist.h"

template <class T>
LinkedList<T>::LinkedList() {
    std::cout << "wtf" << std::endl;
}

template <class T>
LinkedList<T>::~LinkedList(){
    //dtor
}

template <class T>
void LinkedList<T>::print() {
    ListNode<T> *mover = head;
    while (mover != nullptr){
        mover = mover->next;
    }
    std::cout << std::endl;
}

template <class T>
void LinkedList<T>::push_back(T e) {
    if (tail == nullptr){
        tail = head = new ListNode<T>(e);
    } else {
        while (tail->next != nullptr){
            tail = tail->next;
        }
        tail->next = new ListNode<T>(e);
        tail = tail->next;
    }
}

template <class T>
void LinkedList<T>::push_forward(T e) {
    ListNode<T> *current = new ListNode<T>(e);
    if (head == nullptr) {
        head = current;
        head->next = nullptr;
    } else {
        tail = head;
        head = current;
        head->next = tail;
    }
}

template <class T>
void LinkedList<T>::add(T e) {
  if (head == nullptr) {
    head = new ListNode<T>(e);
  } else {
    head = new ListNode<T>(e, head);
  }
}

template <class T>
bool LinkedList<T>::isMember(T e) {
  ListNode<T> *ptr = head;
  while (ptr != nullptr) {
    if (ptr->value == e) {
      return true;
    }
    ptr = ptr->next;
  }
  return false;
}
