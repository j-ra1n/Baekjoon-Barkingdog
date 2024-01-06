// 11399.cpp ATM

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    int res = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

   

    for (int i = 0; i < n; i++)
    {
        res += v[i] * (n - i);
    }
    cout << res;
}