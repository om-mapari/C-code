#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool isRotated(string s,string c)
{
    string sr = s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        sr[(i + n - 2) % n] = s[i];
    }
    cout<<sr<<endl;
    if(sr == c) return true;
    else return false;
}
int main()
{
    cout << isRotated("amazon", "azonam");
    cout<<"HELLO";
    return 0;
}