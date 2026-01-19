// ************************************
// Name: Devin Kennedy
// Co-authors: Sarah Evett, Campbell Gooch
// Date: 4/21/2025
// Course: CS255-01 - Computer Science II
// Description: BST & BNode class declarations
// File name: BST.h
// ************************************

#ifndef _BST_H
#define _BST_H

#include <iostream>
using namespace std;

class BNode {
	int data;
	BNode* left;
	BNode* right;
	BNode();
	BNode(int d);
	BNode(int d, BNode* l, BNode* r);
	friend class BST;
};

class BST {
	BNode* root;
	bool InsertHelper(int e, BNode*& subroot);
	void PrintInOrderHelper(BNode* subroot)const;
	void PrintPreOrderHelper(BNode* subroot)const;
	void PrintPostOrderHelper(BNode* subroot)const;
	int CountHelper(BNode* subroot)const;
public:
	BST();
	bool Insert(int e);
	void PrintInOrder()const;
	void PrintPreOrder()const;
	void PrintPostOrder()const;
	int Count()const;
};

#endif