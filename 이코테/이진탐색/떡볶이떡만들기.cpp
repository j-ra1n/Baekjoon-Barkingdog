// 떡볶이 떡 만들기.cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    int res = 0;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int start = 0;
    int end = 1e9;

    while (start <= end)
    {
        long long total = 0;
        
        int mid = (start + end) / 2;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > mid)
            {
                total += v[i] - mid;
            }
        }

        if (total < m)
        {
            end = mid - 1;
        }
        else
        {
            res = mid;
            start = mid + 1;
        }
    }

    cout << res;
}