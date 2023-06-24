#include "Stack.h"
#include <cstddef>
#include <iostream>
using namespace std;

Stack::Stack() {
	top = NULL;

}
node::node() {
	info = 0;
	link = NULL;
}

void Stack::initializeStack() {
	node* temp;
	while (top != NULL) {
		temp = top;
		top = top->link;
		delete temp;
	}
}

bool Stack::isEmpty() {
	if (top == NULL)
		return true;
	else
		return false;
}
bool Stack::isFull() {
	return false;
}

void Stack::push(int item) {
	node* newnode = new node();
	newnode->info = item;
	if (isEmpty()) {
		newnode->link = NULL;
		top = newnode;
	}
	else {
		newnode->link = top;
		top = newnode;
	}
}

void Stack::pop() {
	node* temp = top;
	top = top->link;
	delete temp;
}

int Stack::stackTop() {
	return top->info;
}

bool Stack::search(int item) {
	bool found = false;
	node* temp = top;
	while (temp != NULL) {
		if (temp->info == item)
			found = true;
		temp = temp->link;
	}
	return found;
}

void Stack::display() {
	node* temp = top;
	while (temp != NULL) {
		cout << temp->info << " "<<endl;
		temp = temp->link;
	}
}

int Stack::count() {
	int counter = 0;
	node* temp = top;
	while (temp != NULL) {
		counter++;
		temp = temp->link;
	}
	return counter;
}

