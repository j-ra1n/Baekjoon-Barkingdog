// 10816.cpp 숫자 카드 2

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) << ' ';
    }
}
