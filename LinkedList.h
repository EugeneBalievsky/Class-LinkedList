#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

class List { 
private:
	struct Node {
		int value;
		Node* next;
	}*head;
	

public:
    
    List();
    List(const List& other);
    ~List();
    void push_back(int n);
    void push_front(int n);
    void remove();
    int find_node(int n);
    void print();

};

#endif
