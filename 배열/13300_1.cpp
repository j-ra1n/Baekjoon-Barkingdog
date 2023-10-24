// 13300_1.cpp 방배정 1차원배열사용
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int g[7] = {0};
    int b[7] = {0};
    int cnt = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int s, y;
        cin >> s >> y; // 성별+학년
        if (s == 0)    // 여자일때
        {
            g[y] += 1; // 학년배열에 k 만큼 값올려주기
        }
        else if (s == 1) // 남자일때
        {
            b[y] += 1;
        }
    }

    for (int i = 1; i < 7; i++)
    {
        if (g[i] <= k) // k보다 작거나 같을때 한방
        {
            if (g[i] > 0)
            {

                cnt++;
            }
        }
        else
        {
            cnt += (g[i] / k) + 1; // k보다 크면 몫 + 1을 더함
        }
    }

    for (int j = 1; j < 7; j++)
    {
        if (b[j] <= k) // k보다 작거나 같을때 한방
        {
            if (b[j] > 0)
            {

                cnt++;
            }
        }
        else
        {
            cnt += (b[j] / k) + 1; // k보다 크면 몫 + 1을 더함
        }
    }

    cout << cnt;
}
