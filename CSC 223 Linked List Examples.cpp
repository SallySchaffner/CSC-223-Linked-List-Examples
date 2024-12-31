// CSC 223 Linked List Examples.cpp : Demonstrate a singly linked list
#include "SinglyLinkedList.h"


int main() {
    int listValues[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
    SinglyLinkedList list;
    for (int item : listValues)
        list.insertAtEnd(item);
    std::cout << "Print the list: " << std::endl;
    list.display();
    std::cout << std::endl;
    std::cout << "Reverse print the list: " << std::endl;
    list.reversePrint();
    std::cout << std::endl;
   

    return 0;
}

