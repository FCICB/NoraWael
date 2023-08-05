#pragma once
class node {
public:
	int info;
	node* left, * right;
	node(int value);
};



class binaryTree
{
public:
	binaryTree();
	node*insert(node*r,int item);
	void insert(int item);
	void preOrder(node* r);
	void inOrder(node*r);
	void postOrder(node*r);
	bool search(int key);
	node* search(node*r,int key);
	node* findMin(node* r);
	node* findMax(node* r);
	node* deletee(node* r, int key);
	node* root;
};

