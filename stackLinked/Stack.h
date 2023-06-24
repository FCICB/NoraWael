#pragma once
class node {
public:
	int info;
	node*link;
	node();
};


class Stack
{
	
public:
	Stack();
	void initializeStack();
	bool isEmpty();
	bool isFull();
	void push(int item);
	void pop();
	int stackTop();
	bool search(int item);
	void display();
	int count();
	node* top;
};

