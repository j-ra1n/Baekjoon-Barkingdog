// 2576.cpp 홀수
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int min = 0, sum = 0, cnt = 0;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 1) // 홀수
        {
            sum += v[i];
        }
        else
        {
            cnt++;
        }
    }
    min = 99;
    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 1)
        {
            if (min > v[i])
            {
                min = v[i];
            }
        }
    }


    if (cnt != 7)
    {

        cout << sum << '\n'
             << min;
    }
    else
    {
        cout << "-1";
    }
}