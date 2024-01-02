// 1010.cpp 다리 놓기

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long res = 1;
        int n;
        int m;

        cin >> n >> m;

        int r = 1;
        for (int j = m; j > m - n; j--)
        {
            res *= j;
            res /= r;
            r++;
        }
        cout << res << '\n';
    }
}