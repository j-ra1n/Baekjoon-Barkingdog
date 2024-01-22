// 10610.cpp 30

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    long long res=0;
    cin >> num;

    sort(num.begin(), num.end(), greater<>());

    if (num[num.size() - 1] != '0') // 정렬후 마지막값이 0이 아닐경우
    {
        cout << -1;
        return 0;
    }
    else
    {
        for (int i = 0; i < num.size(); i++)
        {
            res += num[i] - '0';
        }
    }

    if (res % 3 == 0)
    {
        cout << num;
    }
    else
    {
        cout << -1;
        return 0;
    }
}