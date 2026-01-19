//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Header file for BST that stores patient IDs and index of arrays
// File name: BST.h
//************************************
#ifndef _BST_H
#define _BST_H

#include <string>
#include "LL.h"
using namespace std;

//************************************
// BST NODE CLASS DECLARATIONS
//************************************
class BNode {
	int id;
	int index;
	BNode* left;
	BNode* right;
	BNode();
	BNode(int d, int in);
	BNode(int d, int in, BNode* l, BNode* r);
	friend class BST;
};

//************************************
// BST CLASS DECLARATIONS
//************************************
class BST {
	BNode* root;
	void DestructorHelper(BNode* subroot);
	BNode* InsertHelper(const int& idNum, const int& indexNum, BNode* subroot);
	int SearchHelper(const int& idNum, BNode* subroot) const;
	void PrintInOrderHelper(const string lastNameArr[], const string firstNameArr[], LL hgbValuesArr[], BNode* subroot) const;
	int GetIDUsingIndexHelper(const int& d, BNode* subroot) const;
public:
	BST();
	~BST();
	void Insert(const int& idNum, const int& indexNum);
	int Search(const int& idNum) const;
	void PrintInOrder(const string lastNameArr[], const string firstNameArr[], LL hgbValuesArr[]) const;
	int GetIDUsingIndex(const int& d) const;
};

#endif