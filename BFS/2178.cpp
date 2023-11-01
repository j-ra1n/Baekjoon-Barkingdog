// 21788.cpp 미로 탐색

#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#define X first
#define Y second

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;
    string board[102];
    int di[102][102];

    int cnt = 0;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    for (int i = 0; i < n; i++)         // 미로 입력
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)         // di 배열 -1로 초기화
    {
        for (int j = 0; j < m; j++)
        {
            di[i][j] = -1;
        }
    }


    queue<pair<int, int>> q;               
    q.push({0, 0});                    // 시작 위치 삽입
    di[0][0] = 0;                      

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = cur.X + dx[k];
            int ny = cur.Y + dy[k];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }

            if (board[nx][ny] != '1' || di[nx][ny] >= 0)    // 미로가 '0'이거나 di배열이 0보다 크거나 같으면 계속
            {
                continue;
            }
            di[nx][ny] = di[cur.X][cur.Y] + 1;
            q.push({nx, ny});

        }
    }

    cout << di[n - 1][m - 1] + 1;  // 거리니까 +1
}