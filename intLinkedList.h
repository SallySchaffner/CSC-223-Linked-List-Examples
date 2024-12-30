#ifndef H_intLinkedList
#define H_intLinkedList

#include "SinglyLinkedList.h"

using namespace std;

class intLinkedList : public SinglyLinkedList
{
public:
    void splitEvensOddsList(intLinkedList& evensList,
        intLinkedList& oddLsist);
    //Function to rearrange the nodes of the linked list so
    //that evensList consists of even integers and oddsList
    //consists of odd integers.
    //Postcondition: evensList consists of even integers.
    //               oddsList consists of odd integers.
    //               The original list is empty.
};


void intLinkedList::splitEvensOddsList(intLinkedList& evensList,
    intLinkedList& oddsList)
{
    Node* current;

    current = head;

    while (current != nullptr)
    {
        if (current->data % 2 == 0)
        {
            if (evensList.head == nullptr)
            {
                evensList.head = current;
                evensList.tail = current;
            }
            else
            {
                (evensList.tail)->next = current;
                evensList.tail = (evensList.tail)->next;
            }

            evensList.count++;
        }
        else
        {
            if (oddsList.head == nullptr)
            {
                oddsList.head = current;
                oddsList.tail = current;
            }
            else
            {
                (oddsList.tail)->next = current;
                oddsList.tail = (oddsList.tail)->next;
            }

            oddsList.count++;
        }

        current = current->next;
    }

    if (evensList.head != nullptr)
        (evensList.tail)->next = nullptr;

    if (oddsList.head != nullptr)
        (oddsList.tail)->next = nullptr;

    head = nullptr;
    tail = nullptr;
    count = 0;
}//end splitEvenOddList

#endif
