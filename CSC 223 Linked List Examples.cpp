//This program tests various operation of a linked list
//34 62 21 10 15 90 66 53 7 120 88 36 90 11 17 24 10 -999

#include <iostream>
#include "intLinkedList.h"

using namespace std;


int main()
{
    intLinkedList list;

    intLinkedList evensList;
    intLinkedList oddsList;

    int num;

    cout << "Enter integers ending with -999" << endl;
    cin >> num;

    while (num != -999)
    {
        list.insertAtEnd(num);
        cin >> num;
    }

    cout << endl;

    cout << "list: (" << list.getCount() << "): ";
    list.display();
    cout << endl;

    list.splitEvensOddsList(evensList, oddsList);

    cout << "evensList (" << evensList.getCount() << "): ";
    evensList.display();
    cout << endl;

    cout << "oddsList: (" << oddsList.getCount() << "): ";
    oddsList.display();
    cout << endl;

    cout << "list: (" << list.getCount() << "): ";
    list.display();
    cout << endl;

    return 0;
}




