// 2075.cpp N번째 큰 수

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    vector<int> v(n * n);

    for (int i = 0; i < n * n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());

    cout << v[n - 1];
}