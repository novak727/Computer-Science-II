#include "LL.h"

Node::Node():next(nullptr) {}
Node::Node(int d):data(d), next(nullptr) {}
Node::Node(int d, Node* n):data(d), next(n) {}

LL::LL():head(nullptr) {}

bool LL::Insert(int e) {
	bool success = true;
	if (head == nullptr || e < head->data  )
		head = new Node(e, head);	
	else {
		Node* curr = head;
		Node* prev = head;
		while (curr != nullptr && e > curr->data) {
			prev = curr;
			curr = curr->next;
		}
		if (curr != nullptr && e == curr->data) {
			cout << "No duplicates allowed" << endl;
			success = false;
		}
		else
			prev->next = new Node(e, prev->next);
	}
	
	return success;
}

bool LL::Remove(int e) {
	bool success = false;

	if (head == nullptr)
		return success;
	else if (e == head->data) {
		Node* temp = head;
		head = head->next;
		delete temp;
		success = true;
	}
	else {
		Node* curr = head->next;
		Node* prev = head;
		while (curr != nullptr && e > curr->data) {
			prev = curr;
			curr = curr->next;
		}
		if (curr == nullptr) {
			prev->next = nullptr;
		}
		else {
			prev->next = curr->next;
			delete curr;
			success = true;
		}
	}

	return success;
}

Node* LL::Search(int e)const {
	Node* found = nullptr;

	Node* curr = head;
	while (curr != nullptr && found == nullptr) {
		if (e == curr->data) {
			found = curr;
			break;
		}
		if (e < curr->data)
			break;
		curr = curr->next;
	}
	return found; 
}

void LL::Print()const {
	
	Node* temp = head;				//start at the beginning
	while (temp != nullptr) {		//loop while we are not at the end
		cout << temp->data << endl;  //  "\t" << temp << "\t" << temp->next << endl;    //accessing the current item
		temp = temp->next;					  //moving the iterator to the next item
	}
	/*
	Node* temp = head;				//start at the beginning
	while (temp != nullptr) {		//loop while we are not at the end
		cout << (*temp).data << endl;    //accessing the current item
		temp = (*temp).next;					  //moving the iterator to the next item

	}
	*/
}

float LL::GetAverage()const {
	float sum = 0;
	int i = 0;

	for (Node* temp = head; temp != nullptr; temp = temp->next) {
		sum += temp->data;
		i++;
	}
	return sum / i;
}

bool LL::Copy() {
	bool success = false;
	if (head == nullptr)
		return success;
	else {
		Node* temp = head;
		head = head->next;


	}

	return success;
}

bool LL::Destroy() {
	bool success = false;
	
	Node* temp = head;

	while (temp != nullptr) {
		Node* next = temp->next;
		delete temp;
		temp = next;
	}

	return success;
}