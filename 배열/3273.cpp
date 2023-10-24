// 3273.cpp 두 수의 합
#include <iostream>

using namespace std;

int arr[2000001] = {0};
int cnt = 0;
int n;
int sum = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    cin >> sum;

    for (int i = 1; i < (sum + 1) / 2; i++)
    {
        if (arr[i] == 1 && arr[sum - i] == 1)
        {
            cnt++;
        }
    }

    cout << cnt;
}
