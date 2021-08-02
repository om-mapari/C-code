#include <iostream>
using namespace std;
bool IsSorted(int a[],int n){
    if(n==1){
        return a[0]<a[1];
    }
    return IsSorted(a,n-1) && IsSorted;
}

int main (){
    int a[]={4,5,29,44,56};
    int n = 5;
    cout<<"array IsSorted "<<IsSorted(a,n);
    return 0;
}