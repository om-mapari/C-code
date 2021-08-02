#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    /* DEFINE */
    vector<int> v;
    // vector <int> v(5);   //size
    // vector <bool> v(5,true);   //size

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "size " << v.size() << endl;

    v.pop_back();
    cout << "size " << v.size() << endl;

    v.resize(10);
    cout << "size " << v.size() << endl; //other are zero

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.clear();
    cout << "size " << v.size() << endl;

    cout << "Is Empty " << v.empty() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    v.erase(v.begin() + 1);
    v.insert(v.begin() + 1, 8);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;


}
