#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    int cnt = 0, res = 0;
    cin >> n >> m >> k;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    while (1)
    {
        if (m == cnt)
        {
            break;
        }

        for (int i = 0; i < k; i++)
        {
            res += v[n - 1];
            cnt++;
        }
        res += v[n - 2];
        cnt++;
    }
 
    cout << res;
}
