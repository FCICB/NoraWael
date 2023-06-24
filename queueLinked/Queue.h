#pragma once
class node {
public:
	int info;
	node*link;
	node();
};
class Queue
{
	
public:
	node* Front;
	node* Rear;

	Queue();
	void initializeQueue();
	bool isEmpty();
	bool isFull();
	void enQueue(int item);
	void deQueue();
	int front();
	int rear();
	bool search(int item);
	void display();
	int count();
};

