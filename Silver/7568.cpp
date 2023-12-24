// 7568.cpp 덩치

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<int, int> arr[51];
    int n;
    int cnt = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
            {
                cnt++;
            }
        }
        cout << cnt << ' ';
        cnt = 1;
    }
}