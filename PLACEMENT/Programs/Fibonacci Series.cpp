#include <iostream>
using namespace std;

int main(){
    int t1 = 0, t2 = 1, n, sum;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1;
            continue;
        }
        if (i == 2)
        {
            cout << "  " << t2 << " ";
            continue;
        }
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        cout << " " << sum << " ";
    }

return 0;
}