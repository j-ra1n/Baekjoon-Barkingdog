// 1325.cpp 효율적인 해킹

#include <bits/stdc++.h>
using namespace std;

bool visited[100001];
vector<int> graph[100001];
int com[10001];
int n, m;
int ma = 0;

void dfs(int x)
{
    visited[x] = true;

    for (int i = 0; i < graph[x].size(); i++)
    {
        int node = graph[x][i];

        if (!visited[node])
        {
            com[node]++;
            dfs(node);
        }
    }
}

using namespace std;
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
    }

    for (int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        dfs(i);
    }

    
    int maxCount = 0;
    for (int i = 1; i <= n; i++)
    {
        maxCount = max(maxCount, com[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (com[i] == maxCount)
        {
            cout << i << ' ';
        }
    }
}