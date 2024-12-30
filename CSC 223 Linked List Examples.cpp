// CSC 223 Linked List Examples.cpp : Demonstrate a singly linked list
#include "SinglyLinkedList.h"


int main() {
    SinglyLinkedList list;
    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display(); // Output: 10 -> 20 -> 30 -> nullptr

    list.deleteValue(20);
    list.display(); // Output: 10 -> 30 -> nullptr

    return 0;
}

