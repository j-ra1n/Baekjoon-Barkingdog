// 13305.cpp 주유소

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<int> km;
    vector<int> cost;
    ll res = 0;
    ll now_cost = 0;
    int index = 0;

    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        km.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cost.push_back(x);
    }

    now_cost = cost[0];
    res = now_cost * km[0];
    for (int i = 1; i < n; i++)
    {
        if (now_cost < cost[i])
        {
            res += now_cost * km[i];
        }
        else
        {
            now_cost = cost[i];
            res += now_cost * km[i];
        }
    }

    cout << res;
}