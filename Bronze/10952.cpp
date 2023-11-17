// 10952.cpp A+B - 5
#include <iostream>
using namespace std;

int main(void)
{
    int A, B, sum;

    while (1)
    {
        cin >> A >> B;

        if (A == 0 && B == 0)
        {
            break;
        }
        cout << A + B << '\n';
    }
    return 0;
}