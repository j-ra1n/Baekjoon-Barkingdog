// 1253.cpp 좋다
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int start, end, Good, count = 0;
    for (int num = 0; num < N; num++)
    {
        start = 0;
        end = N - 1;
        Good = v[num];

        while (start < end)   // 투포인터 알고리즘
        {
            if (v[start] + v[end] == Good)    // 서로 다른 두 수의 합인지 확인
            {
                if (start != num && end != num)
                {
                    count++;
                    break;
                }
                else if (start == num)
                {
                    start++;
                }
                else if (end == num)
                {
                    end--;
                }
            }
            else if (v[start] + v[end] < Good)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    cout << count;
}
