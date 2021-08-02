#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int integerBreak(int n)
{
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = INT_MIN;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            dp[i] = max(dp[i], max(dp[i - j], i - j) * j);
        }
    }

    return dp[n];
}
int v2(int n)
{
    int prod =1;
    while (n > 4)
    {
        prod *= 3;
        n = n-3;
    }
    prod *= n;
    return prod;
    
}
int main()
{
    cout << integerBreak(10) << endl;
    cout<<v2(10)<<endl;
    return 0;
}
