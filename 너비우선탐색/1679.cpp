// 1697.cpp 숨바꼭질

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int dist[100002];    // 거리 배열

    queue<int> q;

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < 100002; i++)
    {
        dist[i] = -1;
    }

    dist[n] = 0; // bfs 시작위치
    q.push(n);

    while (dist[k] == -1) // dist배열이 모두 -1이 아닐때까지
    {
        auto cur = q.front();
        q.pop();
        int num = 0;
        for (int num : {cur + 1, cur - 1, cur * 2})    // +1, -1, *2 반복
        {
            if (num < 0 || num > 100000)
            {
                continue;
            }

            if (dist[num] != -1)
            {
                continue;
            }

            dist[num] = dist[cur] + 1;
            q.push(num);
        }
    }

    cout << dist[k]; 

}