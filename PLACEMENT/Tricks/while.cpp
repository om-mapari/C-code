#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[(i+n-d)%n];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }

    // while (t--)
    // {
    //     cout<<t<<" ";
    // }

    return 0;
}