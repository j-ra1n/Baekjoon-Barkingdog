// 1940.cpp 주몽
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
    cin >> N >> M;

    vector<int> A(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());   // 정렬시킨후 A-> 1 2 3 4 5 7

    int count = 0, s = 0, e = N - 1;    // s(start) = 0 , e(end) = N -1 로 처음과 끝 idx에 투포인터
    while (s < e)
    {
        if ((A[s] + A[e]) < M)    
        {
            s++;
        }
        else if ((A[s] + A[e]) > M)
        {
            e--;
        }
        else
        {
            count++;
            s++;
            e--;
        }
    }

    cout << count;
}