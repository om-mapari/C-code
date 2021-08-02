#include <iostream>
using namespace std;

class student{
    string *name ;
    int *roolno = new int();
    string *address;
    public:
    void get(){
        cout<<"Enter name : ";
        name = new string();
        cin>>*name;
        
        cout<<"Roll no : " ;
        cin>>*roolno;

    }
    void print(){
        
        
    }

    
};

int main(){
student s;
s.get();

return 0;
}