// 16435.cpp 스네이크버드

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, h;

    cin >> n >> h;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= h)
        {
            h++;
        }
       
    }

    cout << h;
}
