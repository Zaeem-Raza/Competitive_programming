// Leetcode
#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    vector<int> dp(n + 1);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int x = 0;
    cout << "Climb for " << x++ << "  " << climbStairs(0) << endl;
    cout << "Climb for " << x++ << "  " << climbStairs(1) << endl;
    cout << "Climb for " << x++ << "  " << climbStairs(2) << endl;
    cout << "Climb for " << x++ << "  " << climbStairs(3) << endl;
    cout << "Climb for " << x++ << "  " << climbStairs(4) << endl;
    return 0;
}