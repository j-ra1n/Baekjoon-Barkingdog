// 11720.cpp 숫자의 합
#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    string num;
    cin >> num;

    int sum = 0;
    for (int i = 0; i < num.length(); i++)
    {
        sum += num[i] - 48;
    }

    cout << sum;
}