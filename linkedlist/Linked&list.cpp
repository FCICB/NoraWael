#include "Linked&list.h"
#include <iostream>
using namespace std;
linkedList::linkedList()
{
	head = nullptr;
	last = nullptr;
}
node::node()
{
	info = 0;
	link = NULL;

}
int linkedList::length()
{
	int count = 0;
	node* temp = head;
	while (temp != NULL)
	{
		counter++;
		temp = temp->link;
	}
	return counter;
}

bool linkedList::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;

}

void linkedList::display()
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->info << " ";
		temp = temp->link;
	}
	cout << endl;
}

bool linkedList::search(int item)
{
	bool found = false;
	node*current = head;
	while (current != NULL && !found)
	
		if (current->info == item)
			found = true;
		else
			current = current->link;
	return found;

}

void linkedList::insertFirst(int newvalue)
{
	node* newnode;
	newnode = new node;
	newnode->info=newvalue;
	if (isEmpty())
	{
		newnode->link = NULL;
		head = newnode;
	}
	else
	{
		newnode->link = head;
		head = newnode;
	}
	 
}

void linkedList::insertLast(int newitem)
{
	node* newnode=new node();
	//newnode = new node();
	newnode ->info =newitem;
	newnode->link = nullptr;
	if (isEmpty())
	{

		head=last = newnode;

	 }
	else
	{
		last->link = newnode;
		//newnode->link = NULL;
		last = newnode;
		 
	}
	
}
void linkedList::insertBefore(int item,int newvalue)
{
	if (isEmpty())
		insertFirst(newvalue);
	if (search(item))
	{
		node* newnode = new node();
		newnode->info = newvalue;
		node* temp = head;
		while (temp != NULL && temp->link->info != item)
		{
			temp = temp->link;
		}
		newnode->link = temp->link;
		temp->link = newnode;
	}
	else
	{
		cout << "sorry, item not found \n";
	}

}

void linkedList::deleteFirst(int item)
{
	node* current = head;
	if (isEmpty())
		cout << "can't delete from an empty list "<<endl;
	else if(length()==1)
	{
		delete head;
		head = nullptr;
		last = nullptr;
	}
	else
	{
		node* temp = head;
		head = head->link;
		delete temp;
	}

}
void linkedList::deleteLast(int item)
{
	node* previous = head;
	node* current = head->link;
	while (current->link != NULL)
	{
		previous = current;
		current = current->link;
	}
	delete current;
	previous->link = NULL;
	last= previous;

}