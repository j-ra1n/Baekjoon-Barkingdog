// 1026.cpp 보물

#include <bits/stdc++.h>

using namespace std;

int n;



int main()
{
    cin >> n;

    vector<int> va;
    vector<int> vb;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        va.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vb.push_back(x);
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end(), greater<>());

    for (int i = 0; i < n; i++)
    {
        res += (va[i] * vb[i]);
    }

    cout << res;
}