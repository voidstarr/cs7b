#include <iostream>

class ListNode {
    public:
        double value;
        ListNode* next;
        ListNode(double value, ListNode next = nullptr) {
            this->value = value;
            this->next = next;
        }
};

class LinkedList {
    public:
        ListNode* head = nullptr;
        LinkedList();
        void add(double);
        bool isMember(double);
};

void LinkedList::add(double d) {
    if (head == nullptr) {
        head = new LinkedList(d);
    } else {
        head = new LinkedList(d, head);
    }
}

bool LinkedList::isMember(double d) {
    LinkedList* ptr = head;
    while (ptr != nullptr) {
        if (ptr->value == d) {
            return true;
        }
    }
    return false;
}



int main() {
    
    return 0;
}
