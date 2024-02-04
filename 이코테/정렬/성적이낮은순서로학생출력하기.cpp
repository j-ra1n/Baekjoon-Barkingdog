// 성적이 낮은 순서로 학생 출력하기.cpp

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << ' ';
    }
}