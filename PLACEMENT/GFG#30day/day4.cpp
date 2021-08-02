#include <iostream>
using namespace std;
int calsum(int a[])
{
    int d[] = {3,4};
    int sum = 0;
    for(int atom : d)
    {
        sum += atom;
    }
    return sum;
}
int main()
{
    int a[] = {1,3,4};

    cout<<calsum(a)<<endl;
    return 0;
}