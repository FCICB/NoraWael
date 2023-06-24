#include "stack.h"
#include <cstddef>
#include <iostream>
using namespace std;

stack::stack(int stacksize) {
	if (stacksize <= 0) {
		cout << "size of the array must be positive !" << endl;
		maxsize = 100;
	}
	else
	{
		maxsize = stacksize;
	}
	Top = 0;
	array = new int[maxsize];
	
}

void stack::initializeStack() {
	Top = 0;
}

bool stack::isEmpty() {

	return Top == 0;
}

bool stack::isFull() {
	return Top == maxsize;
}

void stack::push(int item) {
	if (!isFull()) {
		array[Top] = item;
		Top++;
	}
	else
		cout << "can't add to a full stack ! " << endl;
}

void stack::pop() {
	if (!isEmpty()) {
		Top--;
	}
	else
		cout << "can't pop from empty stack ! " << endl;

}

int stack::top() {
	return array[Top - 1];
}

void stack::display() {
	for (int i = Top - 1; i >= 0; i--) {
		cout << array[i]<< " "<<endl;
	}
}

bool stack::search(int item) {
	bool found = false;
	for (int i = Top - 1; i >= 0; i--) {
		if (array[i] == item) {
			found = true;
		}
	 }
	return found;
}
