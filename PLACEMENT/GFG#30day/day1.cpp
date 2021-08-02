#include <iostream>
using namespace std;
int main()
{
    
    int N = 6;
    int a[] = {0,5,1,2,4,3};
    int c[N];
    for (int i = 0; i < N; i++)
    {
        c[i] = a[a[i]];
    }
    

    for (int atom : c)
    {
        cout<<atom<<" ";
    }
    
    //{0, 3, 5, 1, 4, 2}.
    
    return 0;
}

//  void prank(long long a[], int n){
        
//       long c [n];
//       for (int i = 0; i < n; i++)
//       {
//          c[i] = a[i];
//       }
    
    
//       for (int i = 0; i < n; i++)
//       {
//             for (int j = 0; j < n; j++)
//             {
//                 if(c[j] == i)
//                 {
//                     a[j] = c[i];
//                 }
//             }
        
//        }

//     }


// int main()
// {
    
//     int N = 6;
//     int a [] = {0, 5, 1, 2, 4, 3};
//     bool f [N] ;
//     for (int  i = 0; i < N; i++)
//     {
//         f[i] = false;
//     }
    
//     for (int i = 0; i < N; i++)
//     {
//         if(f[i]==true) {continue;}

//         int roll = a[i];
//         for (int j = 0; j < N; j++)
//         {
//             if(a[j]==i)
//             {
//                 int temp = a[j];
//                 int pos  = j;
//                 a[j] = roll;
//                 f[j] = true;
//             }
//         }
        
//     }
//     for (int atom : a)
//     {
//         cout<<atom<<" ";
//     }
    
//     //{0, 3, 5, 1, 4, 2}.
    
//     return 0;
// }