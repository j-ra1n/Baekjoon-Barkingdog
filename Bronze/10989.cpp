// 10989.cpp 수 정렬하기 3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N;
    int arr[10001] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        arr[M] += 1;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {

            cout << i << "\n";
        }
    }
}
