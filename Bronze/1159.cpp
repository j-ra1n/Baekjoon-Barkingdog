// 1159.cpp 농구 경기

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt[26] = {
        0,
    };

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str = "";
        cin >> str;
        cnt[str[0] - 'a']++;
    }

    int five = 0;

    for (int i = 0; i < 26; i++)
    {

        if (cnt[i] >= 5)
        {
            cout << (char)('a' + i);
            five = 1;
        }
    }
    if (five == 0)
    {
        cout << "PREDAJA"<< "\n";
    }
    return 0;
}