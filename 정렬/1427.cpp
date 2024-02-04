// 1427.cpp 소트인사이드

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int sz = str.length();
    int num = stoi(str);

    vector<int> v(sz);
    int idx = 1;
    for (int i = 0; i < sz; i++)
    {
        v[i] = num % 10;
        num /= 10;
    }

    sort(v.begin(), v.end());

    for (int i = sz - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}