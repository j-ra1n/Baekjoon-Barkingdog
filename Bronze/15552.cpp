// 15552.cpp 빠른 A+B

#include <iostream>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int A, B, T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {

        cin >> A >> B;

        cout << A + B << '\n';
    }

    return 0;
}