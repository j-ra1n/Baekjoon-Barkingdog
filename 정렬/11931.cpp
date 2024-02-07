// 11931.cpp 수 정렬하기 4

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << '\n';
    }
}
