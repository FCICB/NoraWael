#pragma once
class stack
{
public:
	stack(int stacksize);
	void initializeStack();
	bool isEmpty();
	bool isFull();
	void push(int item);
	void pop();
	int top();
	void display();
	bool search(int item);
private:
	int maxsize;
	int Top;
	int* array;
};

