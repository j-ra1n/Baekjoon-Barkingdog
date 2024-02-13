// 1260.cpp DFS와 BFS

#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
bool visited_dfs[1001];
bool visited_bfs[1001];
int n, m, v;
queue<int> q;

void dfs(int x)
{
    visited_dfs[x] = true;
    cout << x << ' ';

    for (int i = 0; i < graph[x].size(); i++)
    {
        int node = graph[x][i];

        if (!visited_dfs[node])
        {
            dfs(node);
        }
    }
}

void bfs(int x)
{
    q.push(x);
    visited_bfs[x] = true;
    cout << x << ' ';

    while (!q.empty())
    {
        x = q.front();
        q.pop();

        for (int i = 0; i < graph[x].size(); i++)
        {
            int node = graph[x][i];
            if (!visited_bfs[node])
            {
                q.push(node);
                visited_bfs[node] = true;
                cout << node << ' ';
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> v;
    
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    cout << '\n';
    bfs(v);
}
