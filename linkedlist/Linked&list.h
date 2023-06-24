#pragma once

class node
{
public:
	node();
	int info;
	node* link;
};

class linkedList
{
public:
     linkedList();
	bool isEmpty();
	void display();
	bool search(int item);
	void isfound();
	void insertFirst(int newvalue);
	void insertLast(int newvalue);
	void insertBefore(int item, int newvalue);
	void deleteFirst(int item);
	void deleteLast(int item);
	int length();
	node* head;
	node* last;
	int counter;


};
