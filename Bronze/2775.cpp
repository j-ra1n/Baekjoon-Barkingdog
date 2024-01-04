// 2775.cpp 부녀회장이 될테야

#include <bits/stdc++.h>

using namespace std;

int b(int k, int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (k == 0)
    {
        return n;
    }
    else
    {
        return (b(k - 1, n) + b(k, n - 1));
    }
}

int main()
{
    int t, k, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << b(k, n) << '\n';
    }
}