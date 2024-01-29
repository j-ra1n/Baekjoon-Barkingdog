// 2606.cpp 바이러스

#include <bits/stdc++.h>

using namespace std;

bool visited[101];
vector<int> graph[101];
int cnt = 0;
int n, m;

void dfs(int x)
{
    visited[x] = true;

    for (int i = 0; i < graph[x].size(); i++)
    {
        int node = graph[x][i];

        if (!visited[node])
        {
            cnt++;
            dfs(node);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;


    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(1);

    cout << cnt;
}