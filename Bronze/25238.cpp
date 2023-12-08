// 25238.cpp 가희와 방어율 무시

#include <iostream>
using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    if (a * (100 - b) / 100 >= 100)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}