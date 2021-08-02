#include <iostream>
using namespace std;

void sort012(int arr[], int s, int e)
{
    int mid = 0;
    while (mid <= e)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid++], arr[s++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[e--]);//as if a[i]=0 encounter 
            break;
        }
    }
}

int main()
{
    int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
    int n = 12;
    sort012(arr, 0, n-1);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}