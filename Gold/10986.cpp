// 10986.cpp 나머지 합

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<long> a(N, 0);
    vector<long> v(M, 0);
    long sum = 0;
    long sum2 = 0;

    cin >> a[0];
    for (int i = 1; i < N; i++)
    {
        int temp;
        cin >> temp;
        a[i] = a[i - 1] + temp;
    }
    for (int i = 0; i < N; i++)
    {
        int re = a[i] % M; // 합 배열의 모든 값에 %연산 수행

        if (re == 0) // 이미 나머지가 0인 경우 더하기
        {
            sum++;
        }

        v[re]++; // 나머지가 같은 인덱스의 개수 세기 => v는 0 0 0 에서 3 2 0 으로 변경
    }
    for (int i = 0; i < M; i++)
    {
        if (v[i] > 1)
        {
            sum2 += (v[i] * (v[i] - 1) / 2); // 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수 즉, 3C2 + 2C2 구하기
        }
    }
    cout << sum + sum2;
}