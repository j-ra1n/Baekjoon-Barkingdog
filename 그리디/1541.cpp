// 1541.cpp 잃어버린 괄호

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int res = 0;
    string num;
    bool minus = false;

    cin >> str;

    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == '-' || str[i] == '+' || i == str.size())
        {
            if (minus)
            {
                res -= stoi(num);
                num = "";
            }
            else
            {
                res += stoi(num);
                num = "";
            }
        }
        else
        {
            num += str[i];
        }

        if (str[i] == '-')
        {
            minus = true;
        }
    }

    cout << res;
}