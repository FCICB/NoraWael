#include "binaryTree.h"
#include <cstddef>
#include <iostream>
using namespace std;

node::node(int value) {
	info =value;
	left = right = NULL;
}

binaryTree::binaryTree() {
	root = NULL;
}

node* binaryTree::insert(node*r,int item)
{
	if (r == NULL) {
		node* newnode = new node(item);
		r = newnode;
	}
	else if (item < r->info)
		r->left = insert(r->left, item);
	else
		r->right = insert(r->right, item);
	return r;
}

void binaryTree::insert(int item)
{
	root = insert(root, item);
}

void binaryTree::preOrder(node*r) {
	if (r == NULL)
		return ;
	cout << r->info << "\t";
	preOrder(r->left);
	preOrder(r->right);
}

void binaryTree::inOrder(node*r)
{
	if (r == NULL)
		return;
	inOrder(r->left);
	cout << r->info << "\t";
	inOrder(r->right);
}

void binaryTree::postOrder(node*r) {

	if (r == NULL)
		return;
	postOrder(r->left);
	postOrder(r->right);
	cout << r->info << "\t";
}

node* binaryTree::search(node*r,int key) {
	if (r == NULL)
		return NULL;
	else if (r->info == key)
		return r;
	else if (key < r->info)
		return search(r->left, key);
	else
		return search(r->right, key);
	 
}

bool binaryTree::search(int key) {
	node* result = search(root,key);
	if (result == NULL)
		return false;
	else
		return true;
}

node* binaryTree:: findMin(node*r) {
	if (r == NULL)
		return NULL;
	else if (r->left == NULL)
		return r;
	else
		return findMin(r->left);
}

node* binaryTree::findMax(node* r) {
	if (r == NULL)
		return NULL;
	else if (r->right == NULL)
		return r;
	else
		return findMax(r->right);
}

node* binaryTree::deletee(node*r,int key) {
	if (r == NULL)
		return NULL;
	if (key < r->info)
		r->left = deletee(r->left, key);
	else if (key > r->info)
		r->right = deletee(r->right,key);
	else {
		if (r->left == NULL && r->right == NULL)
			r = NULL;
		else if (r->left != NULL && r->right == NULL)
		{
			r->info = r->left->info;
			deletee(r->left, key);
			r->left == NULL;
		}

		else if (r->left == NULL && r->right != NULL)
		{
			r->info = r->right->info;
			deletee(r->right, key);
			r->right == NULL;
		}
		else {
			node* max = findMax(r->left);
			r->info = max->info;
			r->left = deletee(r->left,max->info);
		}
	}
	return r;
}
