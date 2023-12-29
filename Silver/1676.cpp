// 1676.cpp 팩토리얼 0의 개수

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;

    int N;
    cin >> N;

    for (int i = 5; i <= N; i *= 5)
    {
        cnt += N / i;
    }
    cout << cnt;

}