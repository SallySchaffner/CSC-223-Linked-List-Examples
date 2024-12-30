#pragma once
#include <iostream>

struct Node {
    int data;        // Data part
    Node* next;      // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head; // Pointer to the first node
    Node* tail; // Pointer to last node
    int count; // Number of nodes in the list

public:
    SinglyLinkedList() : head(nullptr), tail(nullptr), count(0) {} // Constructor initializes the head to nullptr

    // Function to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        if (count == 0)
            tail = head;
        count++;
    }

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
            count++;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        count++;
    }

    // Function to delete the first occurrence of a value
    void deleteValue(int value) {
        if (!head) return;

        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            count--;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            count--;
        }
        }

    // Function to return the number of nodes in the list
    int getCount()
    {
        return count;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            temp = temp->next;
        }
        std::cout << "nullptr\n";
    }

    // Destructor to free memory
    ~SinglyLinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
