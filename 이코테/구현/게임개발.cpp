// 게임개발.cpp

#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, dir;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int board[50][50];
bool vis[50][50];

void turn_l()
{
    dir -= 1;
    if (dir == -1)
    {
        dir = 3;
    }
}

int main()
{
    cin >> n >> m;

    cin >> x >> y >> dir;
    vis[x][y] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;

            board[i][j] = a;
        }
    }

    int res = 1;
    int over = 0;

    while (1)
    {
        turn_l();
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (vis[nx][ny] == 0 && board[nx][ny] == 0)
        {
            vis[nx][ny] = true;
            x = nx;
            y = ny;
            res++;
            over = 0;
            continue;
        }
        else
        {
            over++;
        }

        if (over == 4)
        {
            nx = x - dx[dir];
            ny = y - dy[dir];

            if (board[nx][ny] == 0)
            {
                x = nx;
                y = ny;
            }
            else
            {
                break;
            }
            
            over = 0;
        }
    }

    cout << res;
}
