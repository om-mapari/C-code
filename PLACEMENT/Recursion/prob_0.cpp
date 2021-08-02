#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sum(n / 10);
}
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}
bool IsSorted(int arr[], int start, int n)
{
    if (start == n)
    {
        return true;
    }
    if (arr[start] > arr[start + 1])
    {
        return false;
    }
    return IsSorted(arr, start + 1, n);
}
void odd_even(int s, int e)
{
    if (s > e)
    {
        return;
    }
    if (s % 2 == 0)
        cout << s << "is even " << endl;
    odd_even(s + 1, e);
}
bool issortedom(int arr[], int s, int n)
{
    if (s == n)
        return true;
    if (arr[s + 1] < arr[s])
        return false;
    return issortedom(arr, s + 1, n);
}
bool issot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << "fibo(" << n << ") = " << fibo(4) << endl;
    cout << "Sum up to " << n << " = " << sum(n) << endl;
    cout << n << " power 4 = " << power(n, 4) << endl;
    odd_even(10, 20);

    n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << IsSorted(arr, 0, 5) << endl;
    cout << issot(arr, 6);
    return 0;
}