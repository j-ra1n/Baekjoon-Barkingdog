// 10871.cpp X보다 작은 수
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, X;
    int A[10001];

    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] < X)
        {
            cout << A[i] << ' ';
        }
    }
}