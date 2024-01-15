// 1926.cpp 그림

#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool vis[502][502];

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) // 그림 대입
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }
    int cnt = 0;      // 그림 갯수
    int cnt2 = 0;     // 그림 최대크기

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] || board[i][j] == 0)       // 그림칸이 0이거나 vis[i][j] 가 방문하지 않았을때 계속
            {
                continue;
            }

            cnt++;                        // 그림 갯수+1
            queue<pair<int, int>> q;
            vis[i][j] = 1;               // bfs (i,j) 시작좌표
            q.push({i, j});              // 큐에 삽입
            int cmp = 0;                 // 그림 크기 비교

            while (!q.empty())           
            {
                        
                pair<int, int> cur = q.front();
                q.pop();
                cmp++;            // 큐에 들어있는 원소를 하나 뺄 떄마다 +1 = 그림의갯수
                for (int k = 0; k < 4; k++)            // 상하좌우 탐색
                {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)       // 범위 넘어가면 계속
                    {
                        continue;
                    }

                    if (vis[nx][ny] || board[nx][ny] != 1)           // 그림칸이 1이아니거나 vis[nx][ny]가 방문하지 않았을때 계속
                    {
                        continue;
                    }
                    vis[nx][ny] = 1;                // 방문한곳 표시
                    q.push({nx, ny});
                }
            }

            // (i,j) bfs 종료
            cnt2 = max(cnt2, cmp);             // cnt2 와 그림비교 cmp의 최댓값 저장
        }
    }

    cout << cnt << '\n' << cnt2;
}