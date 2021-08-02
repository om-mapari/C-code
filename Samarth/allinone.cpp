//============================================================================
// Name        : evalution_template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include <vector>

using namespace std;

template <typename p>
class Node{
public:
	p data;
	Node* next = NULL;
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
	if(head == NULL){
		return false;
	}
	return true;
}


int position(char i){
	char symbol1[5] = {'^','*','/','+','-'};
	for(int j=0;j<5;j++){
		if(symbol1[j] == i){
			return j;
		}
	}
}

Stack<char>* reverseStack(Stack<char>* s1){
	Stack<char>* s2 = new Stack<char>();
	while(s1->isEmpty()){
		char i = s1->top();
		s2->add(i);
		s1->pop();
	}
	return s2;
}

string reverseExpression(string s){
	string reverse = "";
	for(int i=s.length()-1;i>=0;i--){
		if(s[i] == ')'){
			reverse+='(';
		}
		else if(s[i] == '('){
			reverse+=')';
		}
		else{
		reverse+=s[i];
		}
	}
	return reverse;
}



void prefix(string expression){
	string reverseString = "";
	reverseString = reverseExpression(expression);
	int precedence[5] = {1,2,2,3,3};
	Stack<char>* symbol = new Stack<char>();
	Stack<char>* alpha = new Stack<char>();
	symbol->add('(');
	reverseString = reverseString+")";
	for(char i: reverseString){
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
			 alpha->add(i);
		 }else{
			 if(i == ')'){
				 while(symbol->top() != '('){
					 alpha->add(symbol->top());
					 symbol->pop();
				 }
				 symbol->pop();
			 }else if((precedence[position(i)] == precedence[position(symbol->top())]) and i !='(' and symbol->top()!='(' and i=='^' ){
				 while(symbol->top() !='(' and (precedence[position(i)] == precedence[position(symbol->top())])){
				 	alpha->add(symbol->top());
				 	symbol->pop();
				}
			 symbol->add(i);
			 }else if((precedence[position(i)] > precedence[position(symbol->top())]) and i !='(' and symbol->top()!='(' ){
				 while(symbol->top() !='(' and (precedence[position(i)] > precedence[position(symbol->top())])){
					 alpha->add(symbol->top());
					 symbol->pop();
				 }
				while(symbol->top() !='(' and (precedence[position(i)] == precedence[position(symbol->top())]) and reverseString[i]=='^'){
				alpha->add(symbol->top());
				symbol->pop();
				}
				symbol->add(i);
			 }
			 else{
			 symbol->add(i);
			 }
		 }
		cout << "Symbol: " <<endl;
		symbol->display();
		cout << "Expression: " << endl;
		alpha->display();
		cout << endl;
	}
	alpha->display();
}

void postfix(string expression){
	int precedence[5] = {1,2,2,3,3};
	Stack<char>* symbol = new Stack<char>();
	Stack<char>* alpha = new Stack<char>();
	symbol->add('(');
	expression = expression+")";
	for(char i: expression){
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
			 alpha->add(i);
		 }else{
			 if(i == ')'){
				 while(symbol->top() != '('){
					 alpha->add(symbol->top());
					 symbol->pop();
				 }
				 symbol->pop();
			 }else if((precedence[position(i)] == precedence[position(symbol->top())]) and i !='(' and symbol->top()!='(' and i!='^' ){
				 while(symbol->top() !='(' and (precedence[position(i)] == precedence[position(symbol->top())])){
				 	alpha->add(symbol->top());
				 	symbol->pop();
			}
			 symbol->add(i);
			 }else if((precedence[position(i)] > precedence[position(symbol->top())]) and i !='(' and symbol->top()!='(' ){
				 while(symbol->top() !='(' and (precedence[position(i)] > precedence[position(symbol->top())])){
					 alpha->add(symbol->top());
					 symbol->pop();
				 }
				while(symbol->top() !='(' and (precedence[position(i)] == precedence[position(symbol->top())])){
				alpha->add(symbol->top());
				symbol->pop();
				}
				symbol->add(i);
			 }
			 else{
			 symbol->add(i);
			 }
		 }
		cout << "Symbol: " <<endl;
		symbol->display();
		cout << "Expression: " << endl;
		alpha->display();
		cout << endl;
	}
	alpha = reverseStack(alpha);
	alpha->display();
}


void postfix_evaluation(Stack<int> values,Stack<char>expression){
	Stack<int> value;
	while(expression.isEmpty()){
		char i = expression.top();
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
			value.add(values.top());
			values.pop();
			expression.pop();
			continue;
		}
		else{
			int B = value.top();
			value.pop();
			int A = value.top();
			value.pop();
			switch(i){
			case('+'):{
				value.add(A+B);
				break;
			}
			case('-'):{
				value.add(A-B);
				break;
			}
			case('*'):{
				value.add(A*B);
				break;
			}
			case('/'):{
				value.add(A/B);
				break;
			}case('^'):{
				value.add(pow(A,B));
				break;
			}
		 }
		expression.pop();
		}
	}
	cout << "\n Value: ";
	value.display();
	cout << endl;
}

void prefix_evalution(Stack<int> values,Stack<char>expression){
	Stack<int> value;
	while(expression.isEmpty()){
		char i = expression.top();
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
			value.add(values.top());
			values.pop();
			expression.pop();
			continue;
		}
		else{
			int A = value.top();
			value.pop();
			int B = value.top();
			value.pop();
			switch(i){
			case('+'):{
				value.add(A+B);
				break;
			}
			case('-'):{
				value.add(A-B);
				break;
			}
			case('*'):{
				value.add(A*B);
				break;
			}
			case('/'):{
				value.add(A/B);
				break;
			}case('^'):{
				value.add(pow(A,B));
				break;
			}
		 }
		expression.pop();
		}
	}
	cout << "\n Value: ";
	value.display();
	cout << endl;
}

string reverse(string expression){
	string reverse = "";
	for(int i=0;i<expression.length();i++){
		reverse+=expression[expression.length()-i-1];
	}
	return reverse;
}

int main() {
    string expression;
    int value = 0;
    bool check = true;
    int option;
    while(check){
    	cout << "Select Option:\n1. Infix to Postfix\n2. Infix to Prefix\n3. Postfix Evaluation\n4. Prefix Evaluation\n5. Exit\n";
    	cin >> option;
    	switch(option){
    	        case(1):{
    				cin >> expression;
    				postfix(expression);
    				break;
    			}
    			case(2):{
    				cin >> expression;
    				prefix(expression);
    				break;
    			}
    			case(3):{
    			    string validation = "";
    			    Stack <char> expression_stack;
    			    Stack<int> values;
    			    vector<int> value_arr;
    				cin >> expression;
    				for(char i: expression){
    				    expression_stack.add_infront(i);
    				    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
    				    	if(validation.find_first_of(i,0) < 120){
    				    			values.add_infront(value_arr.at(validation.find_first_of(i,0)));
    				    			continue;
    				    	}
    				    	cout << "Enter the value for char " << i << endl;
    				    	cin >> value;
    				    	value_arr.push_back(value);
    				    	values.add_infront(value);
    				    	validation+=i;
    				    }
    				}
    				postfix_evaluation(values, expression_stack);
    				break;
    			}
    			case(4):{
    			    // string validation = "";
    			    Stack <char> expression_stack;
    			    Stack<int> values;
    			    // vector<int> value_arr;
    				cin >> expression;
    				expression = reverse(expression);
    				for(char i: expression){
						cout<<i<<endl;
    				    expression_stack.add_infront(i);
    				    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) { 
    				    	// if(validation.find_first_of(i,0) < 120){
    				    	// 		values.add_infront(value_arr.at(validation.find_first_of(i,0)));
    				    	// 		continue;
    				    	// }
    				    	cout << "Enter the value for char " << i << endl;
    				    	cin >> value;
    				    	// value_arr.push_back(value);
    				    	values.add_infront(value);
    				    	// validation+=i;
    				    }
    				}
    				prefix_evalution(values, expression_stack);
    				break;
    			}
    			case(5):{
    				check = false;
    				break;
    			}
    			default:{
    				cout << "Invalid Options";
    				break;
    			}
    	}
    }
}
