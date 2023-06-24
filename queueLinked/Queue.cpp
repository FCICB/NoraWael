#include "Queue.h"
#include <cstddef>
#include <iostream>
using namespace std;

node::node() {
	info = 0;
	link = NULL;
}

Queue::Queue() {
	Front = NULL;
	Rear = NULL;
}

void Queue::initializeQueue() {
	node* temp ;
	while (Front != NULL) {
		temp = Front;
		Front = Front->link;
		delete temp;
	}
}
bool Queue::isEmpty() {
	if (Front == NULL)
		return true;
	else
		return false;
}

bool Queue::isFull() {
	return false;
}

void Queue::enQueue(int item) {
	node* newnode = new node();
	newnode->info = item;
	if (isEmpty()) {
		Front = Rear = newnode;
	}
	else
	{
		Rear->link = newnode;
		Rear = newnode;
	}

}

void Queue::deQueue() {
	node* temp;
	if (isEmpty())
		cout << "Can't remove from an empty queue !" << endl;
	else
	{
		temp = Front;
		Front = Front->link;
		delete temp;
	}
}

int Queue::front() {
	return Front->info;
}

int Queue::rear() {
	return Rear->info;
}

bool Queue::search(int item) {
	bool found = false;
	node* temp = Front;
	while (temp != NULL) {
		if (temp->info == item)
			found = true;
		temp = temp->link;
	}
	return found;
}

void Queue::display() {
	node* temp = Front;
	while (temp != NULL) {
		cout << temp->info << " " << endl;
		temp = temp->link;
	}
}

int Queue::count() {
	int counter = 0;
	node* temp = Front;
	while (temp != NULL) {
		counter++;
		temp = temp->link;
	}
	return counter;
}
