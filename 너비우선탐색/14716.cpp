// 14716.cpp 현수막

#include <iostream>
#include <queue>

using namespace std;

bool visited[251][251];
int board[251][251];
int n, m;
int dx[8] = {1, 0, -1, 0, -1, -1, 1, 1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int cnt = 0;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 8; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || board[nx][ny] == 0)
            {
                continue;
            }

            q.push({nx, ny});
            visited[nx][ny] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && board[i][j] == 1)
            {
                cnt++;
                bfs(i, j);
            }
        }
    }

    cout << cnt;
}
