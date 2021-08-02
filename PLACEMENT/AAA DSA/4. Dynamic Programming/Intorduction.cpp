/*
=========================================
1) Intro & dp apporoches : f(n-1),f(n+1)
2) Linear DP : ex fibo, perfect_sq, no. of tiles
3) 2-D DP : f(n,k)
4) DP on Matrix : same as 2D
5) *Knapsack 2D,1D 
6) Kadarn algo
7) Dp on string : [LCS,Pali,]
8) LIS problems : 
9) Stocks releated problem :
10) Interval DP : 
11) Multi D DP :
12) DP on tree
13) others : [egg drop,nCr,BoX]
=========================================
*/

/*
INTRO
How to Identify ::::::::::::::
1) Recurrence Reletion (check)
2) Overlapping Sub Problem (check)
*/

#include <iostream>
using namespace std;
#include <vector>

// #BottomUp 
int fibo_v3(int n) 
{
    int dp[n + 1];
    // for (int i = 0; i <= n; i++)
    //     dp[i] = -1;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
#define m 1000000007
long long MOST_EFFICIENT(long long N)
{
    if (N == 1)
    {
        return 1;
    }
    long long a = 0, b = 1, c;

    for (int i = 2; i <= N; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return b;
}

// #TopDown
int fibo(int n, vector<int> &v)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (v[n] != -1)
        return v[n];
    v[n] = fibo(n - 1, v) + fibo(n - 2, v);
    return v[n];
}

int main()
{
    int n = 7;
    cout << fibo_v3(n) << endl;
    cout<< MOST_EFFICIENT(n) << endl;

    // bottom up

    // top down
    // vector <int> v(8);
    // for (int i = 0; i < v.size(); i++) v[i] = -1;
    // v[0] = 0;
    // v[1] = 1;
    // cout<<fibo(7,v)<<endl;;
    // cout<<"hello"<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}