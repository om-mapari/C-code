#include <iostream>
using namespace std;
int Search(int a[], int n, int x)
{
    int s = 0, e = n - 1;

    while (s <= e)//error for 12
    {
        int mid = (s + e) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int a[] = {6, 2, 3, 1, 9, 10, 15, 13,12, 17}; // creating an array of integers.
    int n;
    int x;
    cout << "Enter element : ";
    cin >> x;

    n = sizeof(a) / sizeof(a[0]);
    int index = Search(a, n, x);
    cout << "Output " << index;

    // for (int atom : a)
    // {
    //     cout << atom << " ";
    // }
    // return 0;
}