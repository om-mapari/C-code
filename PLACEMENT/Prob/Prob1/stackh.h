#include <iostream>
using namespace std;
template <class t>
class node  {
    public:
    t data;
    node<t>* next;
};
template <class t>
class stack {
    node<t>* top;
    public:
    stack(){
        top = NULL;
    }
    void push(t x);
    void pop();
    bool isempty();
    t Top();
    void print();
    
};
