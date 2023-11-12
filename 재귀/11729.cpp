// 11729.cpp 하노이 탑 이동 순서

#include <iostream>
using namespace std;

void func(int a, int b, int n)
{
    if (n == 1)
    {
        cout << a << ' ' << b << '\n';
        return;
    }
    func(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    func(6 - a - b, b, n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << (1<<n) - 1 << '\n'; // << left shift 비트연산  00000001 ->  00001000 즉, 2^k승이됨
    func(1, 3, n);
}