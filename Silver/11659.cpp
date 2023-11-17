// 11659.cpp 구간 합 구하기 4

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[100001], N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;

        arr[i] = arr[i - 1] + temp; // 구간합배열 구하기
    }

    for (int a = 0; a < M; a++)
    {
        int i, j;
        cin >> i >> j;

        cout << arr[j] - arr[i - 1] << '\n'; // endl;보다 '/n'이 빠름
    }
}