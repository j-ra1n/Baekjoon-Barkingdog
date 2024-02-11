// 15726.cpp 이칙연산

#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    int sum = (int)(a * b / c);
    int sum1 = (int)(a / b * c);

    cout << max(sum, sum1);
}