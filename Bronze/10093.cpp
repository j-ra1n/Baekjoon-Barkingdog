// 10093.cpp 숫자
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << b - a - 1 << '\n';

        while (a < b)
        {

            if (a + 1 == b)
            {
                break;
            }
            cout << a + 1 << ' ';
            a++;
        }
    }
    else if (b < a)
    {
        cout << a - b - 1 << '\n';

        while (a > b)
        {
           
            if (a == b + 1)
            {
                break;
            }
            cout << b + 1 << ' ';
            b++;
        }
    }
    else
    {
        cout << "0";
    }
}