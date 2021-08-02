#include <iostream>
using namespace std;
void convertToWave(int *arr, int n){
    
    // Your code here
    for(int i = 0; i<n ; i++)
    {
        if(i%2 == 0)
        {
            swap(*arr[i],*arr[i+1]);
        }
    }
    return *arr;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<convertToWave(arr,5);
    return 0;
}