//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Header file for Linked List that stores HGB values
// File name: LL.h
//************************************
#ifndef _LL_H
#define _LL_H

//************************************
// LINKED LIST NODE CLASS DECLARATIONS
//************************************
class Node {
	double hgbLevel;
	Node* next;
	Node();
	Node(double h);
	Node(double h, Node* n);
	friend class LL;
};

//************************************
// LINKED LIST CLASS DECLARATIONS
//************************************
class LL {
	Node* head;
public:
	LL();
	~LL();
	void InsertAtFront(const double& h);
	void Print() const;
	bool hgbBelowVal(const double& h) const;
};

#endif