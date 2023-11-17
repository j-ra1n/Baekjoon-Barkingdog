// 1181.cpp 단어 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length()) // 길이가 같으면 사전순
    {
        return a < b;
    }
    else // 길이가 다르면 짧은순
    {
        return a.length() < b.length();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<string> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
    {
        if (v[i] != v[i + 1])
        {
            cout << v[i] << '\n';
        }
    }
}