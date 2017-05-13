#pragma once
#include <iostream>

template <class T> class ListNode {
public:
  T value;
  ListNode *next;
  ListNode(T value, ListNode *next = nullptr) {
    this->value = value;
    this->next = next;
  }
};

template <class T> class LinkedList {
public:
  ListNode<T> *head = nullptr;
  ListNode<T> *tail = nullptr;
  LinkedList();
  ~LinkedList();
  void add(T);
  bool isMember(T);
  void push_back(T);
  void push_forward(T);
  void print();
};
