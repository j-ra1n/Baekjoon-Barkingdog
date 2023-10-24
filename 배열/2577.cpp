// 2577.cpp 숫자의 개수

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c;

    cin >> a >> b >> c;

    string sum = to_string(a * b * c);
    string num = "0123456789";

    int d[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (sum[i] == num[j])
            {
                d[j] += 1;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << d[i] << '\n';
    }
}
