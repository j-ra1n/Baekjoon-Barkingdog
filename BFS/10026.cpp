// 10026.cpp 적록색약

#include <iostream>
#include <queue>
#include <string>
#define X first
#define Y second

using namespace std;

string board[102];
int rboard[102][102] = {0};
int gboard[102][102] = {0};
int bboard[102][102] = {0};
int rgboard[102][102] = {0};
bool vis[102][102] = {false};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n;
int a = 0;
queue<pair<int, int>> q;
int ans = 0; // 그림갯수

void bfs(int x, int y)
{
    q.push({x, y});
    vis[x][y] = 1;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {

            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n; ny >= n)
            {
                continue;
            }

            if (a == 1)
            {
                if (vis[nx][ny] || rboard[nx][ny] != 1)
                {
                    continue;
                }
            }
            else if (a == 2)
            {
                if (vis[nx][ny] || gboard[nx][ny] != 1)
                {
                    continue;
                }
            }
            else if (a == 3)
            {
                if (vis[nx][ny] || bboard[nx][ny] != 1)
                {
                    continue;
                }
            }
            else if (a == 4)
            {
                if (vis[nx][ny] || rgboard[nx][ny] != 1)
                {
                    continue;
                }
            }

            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'R')
            {
                rboard[i][j] = 1;
                rgboard[i][j] = 1;
            }
            else if (board[i][j] == 'G')
            {
                gboard[i][j] = 1;
                rgboard[i][j] = 1;
            }
            else if (board[i][j] == 'B')
            {
                bboard[i][j] = 1;
            }
        }
    }

    // 적록색약x
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rboard[i][j] == 1 && !vis[i][j])
            {
                a = 1;
                bfs(i, j);
                ans++;
            }

            if (gboard[i][j] == 1 && !vis[i][j])
            {
                a = 2;
                bfs(i, j);
                ans++;
            }

            if (bboard[i][j] == 1 && !vis[i][j])
            {
                a = 3;
                bfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << ' ';
    ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vis[i][j] = false;
        }
    }

    // 적록색약
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rgboard[i][j] == 1 && !vis[i][j])
            {
                a = 4;
                bfs(i, j);
                ans++;
            }

            if (bboard[i][j] == 1 && !vis[i][j])
            {
                a = 3;
                bfs(i, j);
                ans++;
            }

            
        }
    }
    cout << ans;

}