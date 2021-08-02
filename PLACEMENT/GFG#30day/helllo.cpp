#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h> 

string remove(string s,string r)
{
    string str = "";
    vector <int> v;
    for (int i = 0; i < r.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if(r[i] == s[j])
            {
                v.push_back(j);
            }
        }
        
    }
    sort(v.begin(),v.end());
    int x = 0;
    for (int i = 0; i < s.length() ; i++)
    {
        if(i == v[x])
        {
            x++;
            continue;
        }
        str += s[i];
    }
    s = str;
    return s;
    
}
int main() {
    string s = "occurrence";
    string r = "car";
    cout<<remove(s,r);
	return 0;
}