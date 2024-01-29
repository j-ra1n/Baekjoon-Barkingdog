// 14489.cpp 치킨 두 마리 (...)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b - 2 * c >= 0){

        cout << a + b - 2 * c << '\n';
    }
    else
    {

        cout << a + b << '\n';
    }
}