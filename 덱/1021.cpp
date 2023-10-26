// 1021.cpp 회전하는 큐

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
int n, m;
int cnt = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> dq;

    cin >> n >> m;
    int len = n - m;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    while (m--)
    {
        int x;
        cin >> x;

        int cursor = find(dq.begin(), dq.end(), x) - dq.begin(); // cursor는 x가 있는 위치

        while (dq.front() != x)
        {
            if (cursor < (int)dq.size() - cursor)     // 2번진행
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());      // 3번진행
                dq.pop_back();
            }

            cnt++;
        }
        dq.pop_front();    // dq.front() == x 일때 빼줘야 cnt가 증가안함
    }
    cout << cnt;
}