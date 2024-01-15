// 2583.cpp 영역 구하기

#include <iostream>
#include <queue>
#include <algorithm>
#define X first
#define Y second
using namespace std;

int board[102][102] = {0};
bool vis[102][102] = {0};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
int n, m, k;
int num = 0;          // 갯수
int sz = 0;           // 크기
int szarr[102] = {0}; // 크기배열
int cmp = 0;          // 크기비교
int idx = 0;          // 배열인덱스

void bfs(int x, int y)
{
    q.push({x, y});
    vis[x][y] = 1;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        cmp++;

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }

            if (vis[nx][ny] || board[nx][ny] != 1)
            {
                continue;
            }
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
}

int main()
{

    int x1, y1, x2, y2;

    cin >> n >> m >> k;
    int k2 = k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            board[i][j] = 1;
        }
    }

    while (k--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++)
        {
            for (int j = x1; j < x2; j++)
            {
                board[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && board[i][j] == 1)
            {
                bfs(i, j);
                num++;
                szarr[idx++] = cmp;
                cmp = 0;
            }
        }
    }
    cout << num << '\n';

    sort(szarr, szarr + k2);

    for (int i = 0; i < 100; i++) 
    {
        if (szarr[i] != 0)
        {
            cout << szarr[i] << ' ';
        }
    }
}