// 10818.cpp 최소, 최대
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)

            max = arr[i];

        if (arr[i] < min)

            min = arr[i];
    }
    cout << min << ' ' << max;
    

    return 0;
}