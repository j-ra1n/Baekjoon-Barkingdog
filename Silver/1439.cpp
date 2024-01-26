// 1439.cpp 뒤집기

#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin >> str;
    

    int cnt = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != str[i - 1])
        {
            cnt++;
        }
    }
    cout << (cnt + 1) / 2;
    return 0;
}