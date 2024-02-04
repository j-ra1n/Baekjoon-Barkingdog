// 1946.cpp 신입 사원

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;
        vector<pair<int, int>> v(N);

        for (int i = 0; i < N; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        int idx = 1;
        int interview = v[0].second;
        for (int i = 1; i < N; i++)
        {
            if (v[i].second < interview)
            {
                interview = v[i].second;
                idx++;
            }
        }
        cout << idx << '\n';
    }
}