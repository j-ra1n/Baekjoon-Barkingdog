// 4179.cpp 불!

#include <iostream>
#include <queue>
#include <string>

#define X first
#define Y second
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string board[1002];
    int dist1[1002][1002];
    int dist2[1002][1002];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    queue<pair<int, int>> q1;
    queue<pair<int, int>> q2;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist1[i][j] = -1;
            dist2[i][j] = -1;

            if (board[i][j] == 'F')
            {
                q1.push({i, j});
                dist1[i][j] = 0;
            }

            if (board[i][j] == 'J')
            {
                q2.push({i, j});
                dist2[i][j] = 0;
            }
        }
    }

    while (!q1.empty()) // 불에대한 bfs
    {
        pair<int, int> cur = q1.front();
        q1.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = cur.X + dx[k];
            int ny = cur.Y + dy[k];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }

            if (dist1[nx][ny] > -1 || board[nx][ny] == '#')
            {
                continue;
            }
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            q1.push({nx, ny});
        }
    }

    while (!q2.empty()) // 지훈이의 bfs
    {
        pair<int, int> cur = q2.front();
        q2.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = cur.X + dx[k];
            int ny = cur.Y + dy[k];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) // 범위 벗어나면 미로 탈출성공
            {
                cout << dist2[cur.X][cur.Y] + 1;
                return 0;
            }

            if (dist2[nx][ny] > -1 || board[nx][ny] == '#')
            {
                continue;
            }

            if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) // 불의 전파 시간 추가
            {
                continue;
            }

            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
            q2.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";
}