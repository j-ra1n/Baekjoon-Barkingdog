// 9085.cpp 더하기
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, result = 0;
    cin >> T;

    int arr[101];

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            result += arr[i];
        }
        cout << result << '\n';
        result = 0;
    }
}