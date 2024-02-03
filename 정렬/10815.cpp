// 10815.cpp 숫자 카드

#include <bits/stdc++.h>

using namespace std;

int len, num;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> len;

    while (len--)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    cin >> len;

    while (len--)
    {
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << ' ';
    }
}