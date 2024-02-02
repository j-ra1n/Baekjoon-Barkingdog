// 2161.cpp 카드1

#include <bits/stdc++.h>

using namespace std;

queue<int> res;
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        res.push(i);
    }

    while (!res.empty())
    {
        cout << res.front() << ' ';
        res.pop();
        res.push(res.front());
        res.pop();
    }

    
}