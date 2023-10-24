// 13300_2.cpp 방배정 2차원배열사용

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int gb[2][7] = {0}; // 성별+학년 배열
    int cnt = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) // 각 배열항목에 존재하면 +1
    {
        int s, y;
        cin >> s >> y;
        gb[s][y]++;
    }

    for (int i = 0; i < 2; i++)    // 여,남
    {
        for (int j = 1; j < 7; j++)    // 1~6 학년
        {

            cnt += gb[i][j] / k; // 최대로 나눈 몫 더하기

            if (gb[i][j] % k) // 최대로 나누고 나머지가 나온경우 +1
            {
                cnt++;
            }
        }
    }

    cout << cnt;
}
