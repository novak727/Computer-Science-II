//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: BST that stores patient IDs and index of arrays
// File name: BST.cpp
//************************************
#include "BST.h"

#include <iostream>

//************************************
// BNode class constructors
// Pulled from in-class work, modified for this project
//************************************
BNode::BNode():left(nullptr), right(nullptr) {}
BNode::BNode(int d, int in):id(d), index(in), left(nullptr), right(nullptr) {}
BNode::BNode(int d, int in, BNode* l, BNode* r):id(d), index(in), left(l), right(r) {}

//************************************
// BST class constructor
// Pulled from in-class work
//************************************
BST::BST():root(nullptr) {}

//************************************
// BST class destructor. Calls the helper, passing in the root.
//************************************
BST::~BST() {
	DestructorHelper(root);
}
//************************************
// Helper for BST class Destructor. Recursively deletes subroots until none left.
// Postorder traversal.
//************************************
void BST::DestructorHelper(BNode* subroot) {
	if (subroot != nullptr) {
		DestructorHelper(subroot->left);
		DestructorHelper(subroot->right);
		delete subroot;
	}
}

//************************************
// Insert routine, to be called when an ID is loaded from a file.
// Reassigns the root using the helper function so that the data is actually
// saved. This is required, as not doing this results in only the first line
// of data to be read in successfully.
//************************************
void BST::Insert(const int& idNum, const int& indexNum) {
	root = InsertHelper(idNum, indexNum, root);
}
//************************************
// Insert routine helper. Recursively goes through the Nodes until the value
// originally passed through is put into the proper place. The index passed
// through is also put in the location with the ID number.
// 
// Original routine written as a class, modified for this project and the
// quirks created with data not storing properly originally.
//************************************
BNode* BST::InsertHelper(const int& idNum, const int& indexNum, BNode* subroot) {
	if (subroot == nullptr)
		return new BNode(idNum, indexNum);
	if (idNum < subroot->id)
		subroot->left = InsertHelper(idNum, indexNum, subroot->left);
	else // idNum > subroot->id
		subroot->right = InsertHelper(idNum, indexNum, subroot->right);
	return subroot;
}

//************************************
// Search routine. Returns the value found by the Helper function.
//************************************
int BST::Search(const int& idNum) const {
	return SearchHelper(idNum, root);
}
//************************************
// Search routine helper. Recursively traverses through the BST until either
// the idNum is found or the subroot is nullptr. -1 is returned if the ID
// cannot be found anywhere. Otherwise, the index where that ID number is stored
// is returned, used to pull the information from the parallel arrays.
// 
// Our group did not get the Search routine implemented on pair programming day
// (or my copy didn't have it saved) but I think this version works decently well
// with a Preorder traversal.
//************************************
int BST::SearchHelper(const int& idNum, BNode* subroot) const {
	if (subroot == nullptr)
		return -1;
	if (idNum == subroot->id)
		return subroot->index;
	if (idNum < subroot->id)
		return SearchHelper(idNum, subroot->left);
	else // idNum > subroot->id
		return SearchHelper(idNum, subroot->right);
}

//************************************
// Print in order routine. Call the helper with the same parameters, just with
// the root passed in. The arrays are passed in from the Patient class.
// Arrays made constant so they cannot be modified since copies are not passed
// through with arrays.
//************************************
void BST::PrintInOrder(const string lastNameArr[], const string firstNameArr[], LL hgbValuesArr[]) const {
	PrintInOrderHelper(lastNameArr, firstNameArr, hgbValuesArr, root);
}
//************************************
// Print in order helper routine. Recursively prints using Inorder traversal.
// Arrays made constant so they cannot be modified since copies are not passed
// through with arrays.
// I felt this is easier to program here, even if you have to pass in multiple parameters.
// 
// Original Print Inorder routine written as a class. This version is modified to
// print everything needed for a Patient profile.
//************************************
void BST::PrintInOrderHelper(const string lastNameArr[], const string firstNameArr[], LL hgbValuesArr[], BNode* subroot) const {
	if (subroot != nullptr) {
		PrintInOrderHelper(lastNameArr, firstNameArr, hgbValuesArr, subroot->left);

		cout << "ID:\t" << subroot->id << endl;
		cout << "Last:\t" << lastNameArr[subroot->index] << endl;
		cout << "First:\t" << firstNameArr[subroot->index] << endl;
		hgbValuesArr[subroot->index].Print();
		cout << endl;

		PrintInOrderHelper(lastNameArr, firstNameArr, hgbValuesArr, subroot->right);
	}
}

//************************************
// GetIDUsingIndex routine. Takes an ID number from the Patient class as
// a parameter, and calls the helper, passing that value and the root through.
//************************************
int BST::GetIDUsingIndex(const int& d) const {
	return GetIDUsingIndexHelper(d, root);
}
//************************************
// Search routine using the index. Helpful to use in conjunction with the search
// routine above that returns the index, or for other searches utilizing the
// index, such as when searching for a Patient using Last Name.
// Recursively checks indexes until the one passed through is found. When a subroot
// is nullptr, the index is not in the BST, so -1 is returned for the ID value.
// 
// The routine is largely similar to the Search routine above, returning the ID
// instead of the Index.
//************************************
int BST::GetIDUsingIndexHelper(const int& d, BNode* subroot) const {
	// With the way the Search routine above, coupled with precautions set in the
	// Patient class, this should never occur, but better to have this first check 
	// implemented in case something happens that shouldn't.
	if (subroot == nullptr)
		return -1;
	if (subroot->index == d)
		return subroot->id;
	int left = GetIDUsingIndexHelper(d, subroot->left);
	if (left != -1)
		return left;
	return GetIDUsingIndexHelper(d, subroot->right);
}