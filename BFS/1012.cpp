// 1012.cpp 유기농 배추

#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;
int n, m, T, k;
int board[52][52] = {0};
bool vis[52][52] = {0};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
int ans = 0;

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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;

    for (int a = 0; a < T; a++)
    {

        cin >> n >> m >> k;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            board[a][b] = 1;
        }

        for (int i = 0; i < n; i++)                    
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == 1 && vis[i][j] == 0)    // 필요한 지렁이조건
                {
                    bfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << '\n';
        ans = 0;

        for (int i = 0; i < n; i++)        // 초기화
        {
            for (int j = 0; j < m; j++)
            {
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }
    }
}
