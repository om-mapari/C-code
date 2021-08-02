#include <iostream>
using namespace std;
void bubble(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool sorted = true;
        for (int j = 0; j < n - 1 - i; j++)
        { //n-1-i optimization no 1
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                sorted = false;
            }
        }
        if (sorted)
        {
            break;
        } //not only one time swap used then break
    }
}
int find(int a[],int n)
{
    int sum = a[0];
    int prevsum ;
    int nextsum = sum;
    if(sum != 1)
    {
        return 1 ;
    }
    // bool flag = false;
    int i=1;
    while(true)
    {
        prevsum = nextsum;
        sum += a[i];
        nextsum = sum;
        if(nextsum != prevsum +1)
        {
            return prevsum + 1;
        }
        i++;
    }
}
int main()
{
    // int n = 6;
    // int arr[] = {1,10,3,11,6,15};
    int n = 3;
    int arr[] = {1,1,1};
    bool flag = false;
    int i=0;

    bubble(arr,n);
    
    cout<<"Found : "<<find(arr,n)<<endl;
    return 0;
}