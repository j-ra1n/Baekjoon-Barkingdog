// 2941.cpp 크로아티아 알파벳
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> v = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int cursor;
    string str;
    cin >> str;
    for (int i = 0; i < v.size(); i++)
    {
        while (true)
        {
            cursor = str.find(v[i]);
            if (cursor == string::npos)      // 쓰레기값일때 종료
            {
                break;
            }

            str.replace(cursor, v[i].length(), "!");    // 일치하는 문자열은 !로 바꿔줌
        }
    }

    cout << str.length();
}
