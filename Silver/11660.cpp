// 11660.cpp 구간 합 구하기 5

#include <iostream>
using namespace std;

int arr[1025][1025], dp[1025][1025];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;


    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {

            cin >> arr[i][j];

            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j]; // 구간합 구하기
        }
    }
    for (int i = 0; i < M; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];

        cout << result << '\n';
    }
}