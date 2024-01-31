// 1302.cpp 베스트셀러

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    map<string, int> m;

    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        m[str]++;
    }

    for (auto i : m)
    {
        cnt = max(cnt, i.second);
    }

    for (auto i : m)
    {
        if (i.second == cnt)
        {
            cout << i.first;
            break;
        }
    }
}