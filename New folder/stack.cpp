#include "stack.h"
#include <iostream>

using namespace std;

template <typename t>
void Stack<t>::add_infront(t data){
	if(head==NULL){
		Node<t>* temp = new Node<t>();
		temp->data = data;
		head = temp;
	}else{
		Node<t>* temp = new Node<t>();
		temp->data = data;
		Node<t>* temp1 = head;
		while(temp1->next!=NULL){
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
}

template <typename t>
void Stack<t>::add(t data){
	if(head==NULL){
		Node<t>* temp = new Node<t>();
		temp->data = data;
		head = temp;
	}else{
		Node<t>* temp = new Node<t>();
		temp->data = data;
		temp->next = head;
		head = temp;
	}
}

template <typename t>
void Stack<t>::display(){
	if(!head){
		cout << "Empty" <<endl;
		return;
	}
	Node<t>* temp1= head;
	while(temp1!=NULL){
		cout << temp1->data << " ";
		temp1 = temp1->next;
	}
	cout << endl;
}

template <typename t>
void Stack<t>::pop(){
	if(!head){
		cout << "Empty" <<endl;
		return;
	}
	Node<t>* temp = head;
	head = head->next;
	delete temp;
}
template <typename t>
t Stack<t>::top(){
	return head->data;
}

template <typename t>
bool Stack<t>::isEmpty(){
	return head==NULL;
}
