// ************************************
// Name: Devin Kennedy
// Co-authors: Sarah Evett, Campbell Gooch
// Date: 4/21/2025
// Course: CS255-01 - Computer Science II
// Description: BST & BNode Class constructors and routine definitions
// File name: BST.cpp
// ************************************

#include "BST.h"

// BNode constructors
BNode::BNode():left(nullptr), right(nullptr) {}
BNode::BNode(int d):data(d), left(nullptr), right(nullptr) {}
BNode::BNode(int d, BNode* l, BNode* r):data(d), left(l), right(r) {}


// BST constructor
BST::BST():root(nullptr) {}

// Insert routine, includes checking for duplicates
bool BST::Insert(int e) {
	return InsertHelper(e, root);
}
bool BST::InsertHelper(int e, BNode*& subroot) {
	bool success = true;
	
	if (subroot == nullptr) // checks if there is a number
		subroot = new BNode(e);
	else if (e == subroot->data) { // check for duplicate data
		cout << "No Duplicates Allowed" << endl;
		success = false;
	}
	else if (e < subroot->data)
		success = InsertHelper(e, subroot->left);
	else // e > subroot->data
		success = InsertHelper(e, subroot->right);

	return success;
}

// PrintInOrder routine, prints all values in BST in order from least to greatest
void BST::PrintInOrder()const {
	cout << "< ";
	PrintInOrderHelper(root);
	cout << ">";
}
void BST::PrintInOrderHelper(BNode* subroot)const {
	if (subroot != nullptr) {
		PrintInOrderHelper(subroot->left); // will call until no more left subtrees
		cout << subroot->data << " ";
		PrintInOrderHelper(subroot->right);
	}
}

// PrintPreOrder routine, prints all values in a preorder traversal
void BST::PrintPreOrder() const {
	cout << "< ";
	PrintPreOrderHelper(root);
	cout << ">";
}
void BST::PrintPreOrderHelper(BNode* subroot)const {
	if (subroot != nullptr) {
		cout << subroot->data << " ";
		PrintPreOrderHelper(subroot->left);
		PrintPreOrderHelper(subroot->right);
	}
}

// PrintPostOrder routine, prints all values in a postorder traversal
void BST::PrintPostOrder()const {
	cout << "< ";
	PrintPostOrderHelper(root);
	cout << ">";
}
void BST::PrintPostOrderHelper(BNode* subroot)const {
	if (subroot != nullptr) {
		PrintPostOrderHelper(subroot->left);
		PrintPostOrderHelper(subroot->right);
		cout << subroot->data << " ";
	}
}

// Count routine, returns the total number of Nodes
int BST::Count()const {
	return CountHelper(root);
}
int BST::CountHelper(BNode* subroot)const {
	int count = 0;
	
	if (subroot != nullptr)
		count = 1 + CountHelper(subroot->left) + CountHelper(subroot->right);

	return count;
}