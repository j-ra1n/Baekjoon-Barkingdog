// 1546.cpp 평균
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int sc[1000];
    double result;
    cin >> N;

    for (int i = 0; i < N; i++) // 배열 점수 저장
    {
        cin >> sc[i];
    }

    int max = 0;
    int sum = 0;
    for (int i = 0; i < N; i++) // 최댓값 , 총합 구하기
    {

        if (max < sc[i])
        {
            max = sc[i];
        }
        sum += sc[i];
    }
    result = sum * 100.0 / max / N;
    cout << result;
}