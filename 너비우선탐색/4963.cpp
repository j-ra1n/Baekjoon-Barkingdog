// 4963.cpp 섬의 개수

#include <bits/stdc++.h>

using namespace std;
bool vis[51][51];
int board[51][51];
queue<pair<int, int>> q;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int w, h;
int land_size = 0;

void bfs(int x, int y)
{
    q.push({x, y});
    vis[x][y] = true;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 8; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || ny < 0 || nx >= h || ny >= w)
            {
                continue;
            }
            if (vis[nx][ny] || board[nx][ny] == 0)
            {
                continue;
            }

            vis[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        cin >> w >> h;

        if (w == 0 && h == 0)
        {
            break;
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> board[i][j];
                vis[i][j] = false;
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (board[i][j] && !vis[i][j])
                {
                    land_size++;
                    bfs(i, j);
                }
            }
        }
        cout << land_size << '\n';
        land_size = 0;

    }
}