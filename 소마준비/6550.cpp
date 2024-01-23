// 6550.cpp 부분 문자열

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    string str2;

    while (cin >> str1 >> str2)
    {

        int x = 0;
        int y = 1;
        bool tf = false;
        for (int i = 0; i < str2.length(); i++)
        {
            if (str1[x] == str2[i])
            {
                x++;
            }

            if (x == str1.length())
            {
                tf = true;
                break;
            }
        }

        if (tf)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}