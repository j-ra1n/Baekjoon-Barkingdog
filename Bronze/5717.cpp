// 5717.cpp 상근이의 친구들

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        cout << a + b << '\n';
        a = 0;
        b = 0;
        cin >> a >> b;
    }
}