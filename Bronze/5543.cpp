// 5543.cpp 상근날드

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int b1, b2, b3, coke, sprite;
    cin >> b1 >> b2 >> b3 >> coke >> sprite;

    int bmin = min(b1, b2);
    bmin = min(bmin, b3);
    int dmin = min(coke, sprite);
    int ans = bmin + dmin - 50;

    cout << ans;


}
