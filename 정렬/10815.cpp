// 10815.cpp 숫자 카드

#include <bits/stdc++.h>

using namespace std;

int n, num;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    while (n--)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    cin >> n;

    while (n--)
    {
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << ' ';
    }
}