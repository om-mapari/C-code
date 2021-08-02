#ifndef STACK_H_
#define STACK_H_

#include <iostream>
template <typename t> class Stack;

template <typename p>
class Node{
	p data;
	Node* next = NULL;
	friend class Stack<p>;
};

template <typename t>
class Stack{
		Node<t>* head = NULL;
	public:
		void add(t data);
		void display();
		void pop();
		t top();
		bool isEmpty();
		void add_infront(t data);
};


#endif /* STACK_H_ */
