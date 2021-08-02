#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>

void help(string str1, int start, int end)
{
    while (start <= end)
    {
        swap(str1[start], str1[end]);
    }
}
bool isRotated(string str1, string str2)
{
    
    if (str1.length() != str2.length())
        return false;
    if (str1.length() == 1)
        return false;
    int n = str1.length();
    string s1 = "",s2 = "";
    for( int i= 0;i<n-2;i++) s1+= str1[i];
    for(int i = n-2;i<n;i++) s2+= str1[i];
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string s3 = "";
    for( int i= 0;i<n-2;i++) s3+= s1[i];
    for(int i = n-2;i<n;i++) s3+= s2[i];

    reverse(s3.begin(),s3.end());
    cout<<s3;

    return true;
    // cout << str1 << endl;
    // if (str1 == str2)
    //     return true;
    // else
    //     return false;
}
int main()
{
    cout << isRotated("amazon", "onamaz");
    cout<<"HELLO";
    return 0;
}