 
#include <iostream>
#include <cstddef>
#include "Queue.h"
using namespace std;

int main()
{
    Queue q;
    int number;
    while (true) {
        cout << "1-initialize Queue to empty state \n"
            "2-check if the Queue is empty or not\n"
            "3-check if the Queue is full or not\n"
            "4-enqueue item into queue\n"
            "5-dequeue item from queue\n"
            "6-return front element from queue\n"
            "7-return rear element from queue\n"
            "8-search for an item\n"
            "9-display list info \n"
            "10-return length of the stack\n"
            "====Enter your Choice==== : \n";;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.initializeQueue();
            cout << "Queue is empty !" << endl;
            break;
        case 2:
            cout << q.isEmpty() << endl;
            break;
        case 3:
            cout << q.isFull() << endl;
            break;
        case 4:
            cout << "Enter item to be added :\n" << endl;
            cin >> number;
            q.enQueue(number);
            puts("");
            q.display();
            break;
        case 5:
            q.deQueue();
            q.display();
            break;
        case 6:
            q.front();
            q.display();
            break;
        case 7:
            q.rear();
            q.display();
            break;
        case 8:
            cout << "Enter number to search for :\n";
            cin >> number;
            q.search(number);
            cout << q.search(number) << endl;
            break;
        case 9:
            q.display();
            break;
        case 10:
            cout << q.count() << endl;
            break;
        }



    }


}


 