// 2442.cpp 별 찍기 - 5

#include <iostream>

using namespace std;

int main()
{
    int cnt;
    cin >> cnt;

    for (int i = 1; i <= cnt; i++)
    {
        for (int j = 1; j <= cnt - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}