// 5585.cpp 거스름돈

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {500, 100, 50, 10, 5, 1};

    int res = 0;
    int money;
    cin >> money;
    int money2 = 1000 - money;

    for (int i = 0; i < v.size(); i++)
    {
        if (money2 >= v[i])
        {
            res += money2 / v[i];
            money2 %= v[i];
        }
    }

    cout << res;
}