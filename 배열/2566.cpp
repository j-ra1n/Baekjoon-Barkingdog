// 2566.cpp 최댓값

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10][10];

    int res = 0;
    int a = 1, b = 1;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (res < arr[i][j])
            {
                res = arr[i][j];
                a = i;
                b = j;
            }
        }
    }

    cout << res << '\n';
    cout << a << ' ' << b;
}