// 2217.cpp 로프

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        res = max(res, (n - i) * v[i]);
    }

    cout << res;
}
