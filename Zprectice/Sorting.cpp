#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void Bubble(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool sorted = true;
        for (int j = 0; j < n-1-i; j++)
        {
            if(a[j+1]<a[j]) swap(a[j+1],a[j]); sorted = false;
            
        }
        if(sorted) break;
    }
}
void selection(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int imin = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[imin]) imin = j;
        }
        swap(a[imin],a[i]);
    }
}
void InsersionSort(int a[], int n)
{
    for(int i = 0;i < n-1;i++)
    {
        int value = a[i];
        int h = i;
        while (h>0 && a[h-1]>value)
        {
            a[h] = a[h-1];
            h--;
        }
        a[h] = value;
    }
}
void Merge(int *a, int *l, int nl, int *r, int nr)
{
    int i,j,k;
    i=j=k=0;
    while (i<nl && j<nr)
    {
        (l[i] <= r[j]) ? a[k++]=l[i++]:a[k++]=r[j++];
    }
    while(i<nl) a[k++]=l[i++];
    while(j<nr) a[k++]=r[j++];
}
void MergeSort(int *a, int n)
{
    int mid,*l,*r;
    if(n<2) return ;
    mid = n/2;
    
    l = new int[mid];
    r = new int[n-mid];

    for(int i = 0;i<mid;i++) l[i]=a[i];
    for(int i = mid;i<n;i++) r[i-mid]=a[i];

    MergeSort(l,mid);
    MergeSort(r,n-mid);
    Merge(a,l,mid,r,n-mid);
    delete(l);
    delete(r);
}
int Search(int a[], int n, int x)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(x == a[mid]) return mid;
        else if(x < a[mid]) e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int partition(int a[], int s,int e) 
{
    int pivot = a[e];
    int pi = s;
    for(int i = s;i<e;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[pi]);
            pi++;
        }
    }
    swap(a[pi],a[e]);
    return pi;

}

void quickSort(int a[], int s,int e) 
{
    if(s<e)
    {
        int pi = partition(a,s,e);
        quickSort(a,s,pi-1);
        quickSort(a,pi+1,e);
    }
}
int main()
{
    int n = 7;
    int a[] = {11, 12, 14,23, 55, 64, 198};
    // Bubble(a,n);
    // selection(a,n);
    // InsersionSort(a,n);
    // MergeSort(a,n);
    quickSort(a,0,n-1);
    cout<<"Position : "<<Search(a,n,14)<<endl;

    for(int item : a) cout<<item<<" ";
    return 0;
}