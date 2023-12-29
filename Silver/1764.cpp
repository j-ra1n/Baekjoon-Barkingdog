// 1764.cpp 듣보잡

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    string str;

    vector<string> v1(n), v2;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (binary_search(v1.begin(), v1.end(), str))
        {
            v2.push_back(str);
        }
    }

    sort(v2.begin(), v2.end());

    cout << v2.size() << '\n';
    while (!v2.empty())
    {
        cout << v2.front() << '\n';
        v2.erase(v2.begin());   // 맨앞원소 빼기
    }
}