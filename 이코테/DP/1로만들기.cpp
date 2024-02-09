// 1로만들기.cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int cnt = 0;

    int dp[30001];
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }

        if (i % 5 == 0)
        {
            dp[i] = min(dp[i], dp[i / 5] + 1);
        }
    }

    cout << dp[n];
}