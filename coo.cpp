#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class node
{
    int data;
    node *next;
    friend class stac;
};
class stac
{
    node *top;
    stac()
    {
        top == NULL;
    }
    public:
    void push(int x);
    void pop();
    int Top();
    bool isempty();
};
void stac :: push(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = top;
    top = temp;
}
void stac :: pop()
{
    if(top == NULL) return;
    node* temp = top;
    top = top->next;
    delete(temp);
}
int stac :: Top()
{
    return top->data;
}
int main()
{
    
    return 0;
}