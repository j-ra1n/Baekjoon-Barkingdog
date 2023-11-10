// 1629.cpp 곱셈

#include <iostream>

using ll = long long;
using namespace std;

ll func(ll a, ll b, ll c)
{
    if (b == 1)
    {
        return a % c;
    }
    ll ans = func(a, b / 2, c);
    ans = ans * ans % c;
    if (b % 2 == 0)
    {
        return ans;
    }

    return ans * a % c;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << func(a, b, c);
}