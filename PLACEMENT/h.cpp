#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool isRotated(string str1, string str2)
{
    string sr1 = str1;
    string sr2 = str1;
    int n = str1.length();
    for (int i = 0; i < n; i++)
    {
        sr1[(i + n - 2) % n] = str1[i];
        sr2[(i + n + 2) % n] = str1[i];
    }

    if(sr1 == str2 || sr2 == str2) return true;
    else return false;
}
int main()
{
    cout << isRotated("amazon", "azonam");
    cout<<"HELLO";
    return 0;
}