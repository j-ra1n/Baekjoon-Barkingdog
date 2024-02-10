// 14562.cpp 나는 행복합니다~

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, K;

    cin >> N >> M >> K;

    cout << K / M << " " << K % M << "\n";
}
