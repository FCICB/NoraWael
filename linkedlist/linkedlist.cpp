 
#include <iostream>
#include "Linked&list.h"
using namespace std;
int main()
{
    linkedList ls;
    int number;
    while (true) {
       
        cout <<"1-check if list is empty or not \n"
            "2-display list info \n"
            "3-search for an item\n"
            "4-insert item in the beginig\n"
            "5-insert item in the end \n"
            "6-insert item in the list\n"
            "7-delete item from the begining\n"
            "8-delete item from the end \n"
            "====Enter your Choice==== : \n";;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            ls.isEmpty();
            cout <<ls.isEmpty()<<endl ;
            break;
        case 2:
            ls.display();
            break;
        case 3:
            cout << "Enter number to search for :\n";
            cin >>number;
            ls.search(number);
            cout <<ls.search(number)<<endl ;
            break;
        case 4:
            cout << "Enter Number: \n";
            int number;
            cin >> number;
            ls.insertFirst(number);
            cout << "Adedded Succefully !\n";
            ls.display();
            break;
        case 5:

            cout << "Enter number:\n";
            cin >> number;
            ls.insertLast(number);
            cout << "number added succefully !\n";
            ls.display();
            break;

        case 6:
            int newvalue;
            ls.display();
            cout << "Enter exiting number & new value:\n";
            cin >> number>>newvalue;
            ls.insertBefore(number,newvalue);
            cout << "number added succefully !\n";
            ls.display();
            break;
        case 7:
            ls.display();
            cout << "Enter number to delete :\n";
            cin >> number;
            ls.deleteFirst(number);
            cout << "number deleted succefully !\n";
            ls.display();
            break;
        case 8:
            ls.display();
            ls.deleteLast(number);
            cout << "number deleted succefully !\n";
            ls.display();
            break;
        
        

        }

     }
}

 