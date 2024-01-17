// 1075.cpp 나누기

#include <bits/stdc++.h>
using namespace std;

int n, f;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> f;

    n = n / 100 * 100;

    for (int i = 0; i < 100; i++)
    {
        int num = n + i;
        if (num % f == 0)
        {
            if (i < 10)
            {
                cout << "0" << i << "\n";
            }
            else
            {
                cout << i << "\n";
            }

            return 0;
        }
    }
}