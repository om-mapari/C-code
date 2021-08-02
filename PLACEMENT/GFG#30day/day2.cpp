#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

string decimaltoOctal(int n)
{
 
    string str = "";
    int r ,q;
    r = q = n;
    while (q != 0)
    {
        r = q%8;
        q = q/8;
        str += to_string(r); 
    } 
    reverse(str.begin(), str.end());
    return str;
    
}
string decimalto9(int n)
{
 
    string str = "";
    int r ,q;
    r = q = n;
    while (q != 0)
    {
        r = q%9;
        q = q/9;
        
        str += to_string(r); 
    } 
    reverse(str.begin(), str.end());
    return str;
    
}
long long findNth(long long n)
{
 
    string str = "";
    long long r ,q;
    r = q = n;
    while (q != 0)
    {
        r = q%9;
        q = q/9;
        str += to_string(r); 
    } 
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    long long num = stol(str, nullptr, 10);
    return num;
    
}
int main()
{
    cout<<"enter : ";
    long long N;
    cin>>N;
    // cout<<decimaltoOctal(N)<<endl;
    cout<<findNth(N)<<endl;

    cout<<"bye"<<endl;
    
    return 0;
}
