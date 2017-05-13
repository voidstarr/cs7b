#include <iostream>
#include "linkedlist.h"


int main() {
    LinkedList<int> list1;
    list1.push_back(3);
    list1.push_back(6);
    list1.print();
    return 0;
}
