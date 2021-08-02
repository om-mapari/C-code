#include <iostream>
using namespace std;
void MergeArray(int a[],int al,int b[],int bl)
{
    int m[al+bl];
    int i,j,k;
    i = j = k = 0;
    while (i < al && j <bl)
    {
        if(a[i]>b[j])
        {
            m[k] = a[i];
            j++;
            k++;
            cout<<" hello"<<endl;
        }
        else
        {
            m[k] = b[j];
            j++;
            k++;
            cout<<" hello2"<<endl;
        }
    }

    // while (i < al)
    // {
    //     m[k] = a[i];
    //     i++;
    //     k++;
    // }

    // while (j < bl)
    // {
    //     m[k] = b[j];
    //     j++;
    //     k++;
    // }
    
    for (int i = 0; i < al + bl; i++)
    {
        cout<<m[i]<<" ";
    }
    
    
    

}
int main()
{
    int al =5;
    int a[] = {1,3,5,7,9};
    int bl =7;
    int b[] = {0,4,8,10,11,12,16};
    MergeArray(a,al,b,bl);

    return 0;
}