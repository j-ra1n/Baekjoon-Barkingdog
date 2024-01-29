// 1260.cpp DFS와 BFS

#include <bits/stdc++.h>

using namespace std;

bool visited_dfs[1001];
bool visited_bfs[1001];
vector<int> graph_dfs[1001];
vector<int> graph_bfs[1001];
int n, m, v;

void dfs(int x)
{
    visited_dfs[x] = true;
    cout << x << ' ';

    for (int i = 0; i < graph_dfs[x].size(); i++)
    {
        int node = graph_dfs[x][i];

        if (!visited_dfs[node])
        {
            dfs(node);
        }
    }
}

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    visited_bfs[x] = true;

    while (!q.empty())
    {
        x = q.front();
        q.pop();
        cout << x << ' ';

        for (int i = 0; i < graph_bfs[x].size(); i++)
        {
            int node = graph_bfs[x][i];

            if (!visited_bfs[node])
            {
                q.push(node);
                visited_bfs[node] = true;
            }
        }
    }
}

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> v;

    vector<pair<int, int>> p(m);

    for (int i = 0; i < m; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end(), compare);

    for (int i = 0; i < m; i++)
    {

        graph_dfs[p[i].first].push_back(p[i].second);
        graph_dfs[p[i].second].push_back(p[i].first);
        graph_bfs[p[i].first].push_back(p[i].second);
        graph_bfs[p[i].second].push_back(p[i].first);
    }

    dfs(v);
    cout << '\n';
    bfs(v);
}
