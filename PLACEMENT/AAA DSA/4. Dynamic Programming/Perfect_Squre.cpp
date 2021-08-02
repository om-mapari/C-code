#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int numSquares(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = INT_MAX;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i], 1 + dp[i - j * j]);
            
        }
    }
    return dp[n];
}
int num(int n)
{
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i] = INT_MAX;
    dp[0] = 0;
    for (int i = 1; i<=n; i++)
    {
        for (int j= 1; j * j<= i; j++)
        {
            dp[i] = min(dp[i],1+dp[i-j*j]);
            cout<<dp[i]<<" "<<i<<" "<<j<<endl;
        }
        
    }
    return dp[n];
}
int main()
{
    int n = 12;
    cout<<numSquares(n)<<endl;
    return 0;
}