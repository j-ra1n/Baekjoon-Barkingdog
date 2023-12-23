// 1920.cpp 수 찾기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
bool b_s(vector<int> &arr, int len, int target)  이진탐색 구현
{
    int low = 0, high = len - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (target == arr[mid])
        {
            return true;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else    // (target > arr[mid])
        {
            low = mid + 1;
        }
    }
    return false;
}
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    int cnt;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> cnt;
        cout << binary_search(v.begin(), v.end(), cnt) << '\n';
    }
}

