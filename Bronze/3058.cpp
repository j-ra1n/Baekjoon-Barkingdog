// 3058.cpp 짝수를 찾아라

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int sum = 0;
        int min = 101;

        for (int i = 0; i < 7; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                sum += a;

                if (min > a)
                {
                    min = a;
                }
            }
        }
        cout << sum << min << '\n';
    }

}
