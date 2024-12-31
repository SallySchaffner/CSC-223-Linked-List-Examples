// CSC 223 Linked List Examples.cpp : Demonstrate a singly linked list
#include "SinglyLinkedList.h"

void BuildListForward();
void BuildListBackward();


int main() {
    
    BuildListForward();
    BuildListBackward();

    return 0;
}

void BuildListForward()
{
    SinglyLinkedList list;
    std::cout << "Build a forward list" << std::endl;
    for (int i = 10; i < 60; i += 10)
    {
        list.insertAtEnd(i);
    }
    std::cout << list.getCount() << std::endl;
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the first node" << std::endl;
    list.deleteValue(10);
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the last node" << std::endl;
    list.deleteValue(50);
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the middle node" << std::endl;
    list.deleteValue(30);
    list.display();
    std::cout << std::endl;
}

void BuildListBackward()
{
    SinglyLinkedList list;
    std::cout << "Build a backward list" << std::endl;
    for (int i = 10; i < 60; i += 10)
    {
        list.insertAtBeginning(i);
    }
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the first node" << std::endl;
    list.deleteValue(50);
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the last node" << std::endl;
    list.deleteValue(10);
    list.display();
    std::cout << std::endl;
    std::cout << "Delete the middle node" << std::endl;
    list.deleteValue(30);
    list.display();
    std::cout << std::endl;

}

