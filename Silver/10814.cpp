// 10814.cpp 나이순 정렬
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> x, pair<int, string> y)
{
    return x.first < y.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<pair<int, string>> v;
    pair<int, string> p;
 

    for (int i = 0; i < N; i++)
    {
        int num;
        string st;
        cin >> num >> st;
        v.push_back(make_pair(num,st));
        //cin >> p.first >> p.second;
        //v.push_back(p); 랑 같음
    }
    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}