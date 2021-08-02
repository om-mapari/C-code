//print decrasing order
#include <iostream>
using namespace std;
void decr(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decr(n-1);  
}
void incr(int n){
    if(n==0){
        return;
    }
    incr(n-1);
    cout<<n<<" ";
    return;//understanding
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout<<"Printing decreasing order : ";
    decr(n);
    cout<<endl;
    cout<<"Printing Increasing order : ";
    incr(n);
}