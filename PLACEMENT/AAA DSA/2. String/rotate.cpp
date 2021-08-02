#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void help(string str1,int start,int end)
{
    while (start <= end)
    {
        swap(str1[start],str1[end]);
    }
    
}
bool isRotated(string str1, string str2)
{
    int n = str1.length();
    if (str1.length() != str2.length())
        return false;
    else if (str1.length() == 1)
        return false;
    else
    {
        help(str1,0,n-3);
        help(str1,n-2,n-1);
        help(str1,0, n - 1);
    }
}
int main()
{
    cout<<isRotated("amazon","onamaz");
    return 0;
}