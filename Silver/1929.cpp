// 1929.cpp 소수 구하기

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[1000001];

    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }

        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << '\n';
        }
    }
    
    return 0;
}
