// 13866.cpp 팀 나누기

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int v1 = 0;
    int v2 = 0;

    v1 = max(a, b) - min(a, b);
    v2 = max(c, d) - min(c, d);
    cout << max(v1, v2) - min(v1, v2);
}