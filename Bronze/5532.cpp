// 5532.cpp 방학숙제

#include <iostream>

using namespace std;

int main()
{
    int L, A, B, C, D;

    cin >> L >> A >> B >> C >> D;

    // 국어
    int lang = A / C;

    if (A % C)
    {
        lang++;
    }

    // 수학
    int math = B / D;

    if (B % D)
    {
        math++;
    }

    int max1 = max(lang, math);

    cout << L - max1;
}
