// 부품 찾기.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string binary(vector<int> &v, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (v[mid] == target)
        {
            return "yes";
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return "no";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    vector<int> v(n);
    

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> m;
    vector<int> v2(m);
    
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < m; i++)
    {
        cout << binary(v, v2[i], 0, n - 1) << ' ';
    }
}