// 10768.cpp 특별한 날

#include <iostream>
using namespace std;

int main()
{
    int m, d;

    cin >> m >> d;

    if (m < 2)
    {
        cout << "Before";
    }
    else if (m == 2)
    {
        if (d < 18)
        {
            cout << "Before";
        }
        else if (d == 18)
        {
            cout << "Special";
        }
        else 
        {
            cout << "After";
        }
    }
    else if (m > 2)
    {
        cout << "After";
    }
}