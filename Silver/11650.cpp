// 11650.cpp 좌표 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    pair<int, int> p;

    for (int i = 0; i < N; i++)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}