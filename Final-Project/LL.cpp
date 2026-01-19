//************************************
// Name: Devin Kennedy
// Date: 4/30/2025
// Course: CS255-01 - Computer Science II
// Description: Linked List that stores HGB values of patients
// File name: LL.cpp
//************************************
#include "LL.h"

#include <iostream>
using namespace std;

//************************************
// Constructors for Node class
// 
// Pulled from in-class work, modified for this project
//************************************
Node::Node():next(nullptr) {}
Node::Node(double h):hgbLevel(h), next(nullptr) {}
Node::Node(double h, Node* n):hgbLevel(h), next(n) {}


//************************************
// Constructor for Linked List class
// 
// Pulled from in-class work
//************************************
LL::LL():head(nullptr) {}

//************************************
// Linked List destructor. Recursively deletes each node until all data
// is deleted.
// 
// Pulled from in-class work. Was written on a pair programming day with
// Sarah and Campbell.
//************************************
LL::~LL() {
	Node* temp = head;

	while (temp != nullptr) {
		Node* next = temp->next;
		delete temp;
		temp = next;
	}
}

//************************************
// InsertFront routine to insert a double value to the front of a Linked List.
// 
// Super simplified since data is already ordered in the file correctly, there's
// no reason to check each value before inserting.
// 
// In-class work was referenced, but no instructions were taken from that since
// it's not needed in this case. This basically reassigns the head repeatedly for
// each value read in, so each new value is put in the front.
//************************************
void LL::InsertAtFront(const double& h) {
	Node* temp = new Node(h);
	temp->next = head;
	head = temp;
}

//************************************
// Print routine for the HGB levels. Is called as part of the Print routine
// whenever an entire profile needs to be printed properly.
// 
// Pulled parts from in-class Print routine, with extra instructions added
// for this project. Original routine was written as a class.
//************************************
void LL::Print() const{
	Node* curr = head;
	int month = 4;
	int year = 2025;

	while (curr != nullptr) {
		// For proper formatting
		if (month < 10)
			cout << "0";

		cout << month << '/' << year << ":\t" << curr->hgbLevel << endl;
		month--;
		if (month == 0) {// The month should never go negative, so this is a safe enough check
			month = 12;
			year--;
		}
		curr = curr->next;
	}
}

//************************************
// HGB Value Checker. Traverses through the LL checking each hgbLevel. If the
// stored level is less than the value passed through from user input, it
// returns true. Otherwise, the boolean doesn't change (returns false).
// 
// Inspired from an in-class Search routine, but has been heavily modified.
// Original in-class Search routine written as a class.
//************************************
bool LL::hgbBelowVal(const double& h) const {
	Node* curr = head;
	bool isBelow = false;
	while (curr != nullptr) {
		if (curr->hgbLevel < h)
			isBelow = true;
		curr = curr->next;
	}
	return isBelow;
}