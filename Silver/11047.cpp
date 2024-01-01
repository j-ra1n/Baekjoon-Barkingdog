// 11047.cpp 동전 0

#include <iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;

    int arr[11];
    int res = 0;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (1)
    {
        if (k == 0)
        {
            cout << res;
            return 0;
        }

        for (int i = n; i > 0; i--)
        {
            if (arr[i] <= k)
            {
                res += (k / arr[i]);
                k = (k % arr[i]);
            }
        }
    }
}