// 2589.cpp 보물섬

#include <bits/stdc++.h>

using namespace std;

string board[52];
int mb[52][52];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n, m;
int res = -1;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    mb[x][y] = 0;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }
            if (mb[nx][ny] != -1)
            {
                continue;
            }
            if (board[nx][ny] == 'W')
            {
                continue;
            }

            mb[nx][ny] = mb[cur.first][cur.second] + 1;
            res = max(mb[nx][ny], res);
            q.push({nx, ny});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mb[i][j] = -1;
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
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mb[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'L' && mb[i][j] == -1)
            {
                bfs(i, j);
            }
        }
    }

    cout << res;
}