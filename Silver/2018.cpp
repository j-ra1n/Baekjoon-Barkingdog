// 2018.cpp 수들의 합 5
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int start_idx = 1, end_idx = 1, sum = 1, count = 1;

    while (end_idx != N)
    {
        if (sum == N)    // 답(N)을 찾았을때
        {
            end_idx++;
            count++;
            sum += end_idx;
        }
        else if (sum > N)  // 현재 합이 답(N)보다 클때
        {
            sum -= start_idx;
            start_idx++;
        }
        else                  // 현재 합이 답(N)보다 작을때
        {
            end_idx++;
            sum += end_idx;
        }
    }
    cout << count;
}