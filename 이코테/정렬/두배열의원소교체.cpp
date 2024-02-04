// 두 배열의 원소 교체.cpp

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    int res = 0;

    cin >> n >> k;
    vector<int> va(n);
    vector<int> vb(n);

    for (int i = 0; i < n; i++)
    {
        cin >> va[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vb[i];
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end(), greater<>());

    for (int i = 0; i < k; i++)
    {
        if (va[i] < vb[i])
        {
            va[i] = vb[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        res += va[i];
    }
    cout << res;
}