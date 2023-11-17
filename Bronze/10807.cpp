// 10807.cpp 개수세기

#include <iostream>
using namespace std;

int main(void)
{
    int N;
    int V = 0;
    cin >> N;
    int arr[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> V;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == V)
        {
            sum += 1;
        }
    }
    cout << sum;

    return 0;
}