// 2667.cpp 단지번호붙이기

#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define X first
#define Y second

using namespace std;

string board[27];
int mboard[27][27] = {0};
bool vis[27][27] = {0};
int n;
int num = 0;   // 단지 수
vector<int> v; // 집의 수
int cmp = 0;
queue<pair<int, int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

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

            if (nx < 0 || ny < 0 || nx >= n || ny >= n)
            {
                continue;
            }

            if (vis[nx][ny] || mboard[nx][ny] != 1)
            {
                continue;
            }
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
    v.push_back(cmp);
    cmp = 0;
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
            if (board[i][j] == '1')
            {
                mboard[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis[i][j] && mboard[i][j] == 1)
            {
                bfs(i, j);
                num++;
            }
        }
    }

    cout << num << '\n';

    sort(v.begin(), v.end());    // 정렬

    for (int i = 0; i < num; i++)
    {
        cout << v[i] << '\n';
    }
}