 
#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack s(70);
    int number;
    while (true) {
        cout << "1-initialize stack to empty state \n"
            "2-check if the stack is empty or not\n"
            "3-check if the stack is full or not\n"
            "4-push item into stack\n"
            "5-pop item from stack\n"
            "6-return top element in the stack\n"
            "7-display list info \n"
            "8-search for item in stack \n"
            "====Enter your Choice==== : \n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.initializeStack();
            cout << "stack is empty !" << endl;
            break;
        case 2:
            cout << s.isEmpty() << endl;
            break;
        case 3:
            cout << s.isFull() << endl;
            break;
        case 4:
            cout << "Enter item to be added :\n" << endl;
            cin >> number;
            s.push(number);
            puts("");
            s.display();
            break;
        case 5:
            s.pop();
            s.display();
            break;
        case 6:
           cout<< s.top()<<endl;
            break;
        case 7:
            s.display();
            break;
        case 8:
            cout << "Enter number to search for :\n";
            cin >> number;
            s.search(number);
            cout << s.search(number) << endl;
            break;
         
        }



    }
}

 