// 1966.cpp 프린터 큐

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        int cnt = 0;

        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            q.push({i, x});
            pq.push(x);
        }

        while (!q.empty())
        {
            int idx = q.front().first;
            int prio = q.front().second;
            q.pop();

            if (pq.top() == prio)
            {
                pq.pop();
                cnt++;

                if (idx == m)
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else
            {
                q.push({idx, prio});
            }
        }
    }
}