// 10807.cpp 개수 세기

#include <iostream>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, v;
    int cnt = 0;

    int arr[201] = {0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (v == arr[i])
        {
            cnt++;
        }
    }

    cout << cnt;
}