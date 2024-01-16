// 1931.cpp 회의실 배정

#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int, int>> v;

    int n;
    cin >> n;
    int end;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), compare);

    end = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (end <= v[i].first)
        {
            cnt++;
            end = v[i].second;
        }
    }

    cout << cnt;
}