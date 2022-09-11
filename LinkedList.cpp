#include <iostream>

#include "LinkedList.h"

List::List() {
	head = nullptr;
}
List::List(const List& other) {
	if (!other.head) {
		head = nullptr;
		return;
	}
	else{
		Node* it = other.head;
		while (it != NULL) {
			this->push_back(it->value);
			it = it->next;
		}
	}
	std::cout << "COPY\n";
}

List::~List() {
	while (head) {
		remove();
	}
	std::cout << "List is clear\n";
}

void List::push_back(int n) {
	Node* ptr = new Node;
	ptr->value = n;
	ptr->next = nullptr;
	if (!head) {
		head = ptr;
	}
	else {
		Node* curr = head;
		while (curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = ptr;
	}
}
void List::push_front(int n) {
	Node* ptr = new Node;
	ptr->value = n;
	ptr->next = head;
	head = ptr;

}
void List::remove() {
	if (head) {
		Node* curr = new Node;
		curr = head->next;
		delete head;
		head = curr;
	}
}
int List::find_node(int n) {
	for (Node* it = head; it != nullptr; it = it->next) {
		if (it->value == n) {
			return it->value;
		}	
	}
	return NULL;
}
void List::print() {
	if (!head) {
		std::cout << "List is empty\n";
	}
	else {
		Node* curr = head;
		while (curr != NULL) {
			std::cout << curr->value << ' ';
			curr = curr->next;
		}
		std::cout << '\n';
	}
}

