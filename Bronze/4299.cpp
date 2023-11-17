// 4299.cpp AFC 웜블던

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    int x = (a + b) / 2;
    int y = (max(a, b) - min(a, b)) / 2;

    if (x + y == a && x - y == b)
    {

        cout << x << ' ' << y;
    }
    else
    {
        cout << -1;
    }
}