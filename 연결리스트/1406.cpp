// 1406.cpp 에디터
 
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    int n;
    cin >> str;

    list<char> list = {};

    for (auto a : str)
    {
        list.push_back(a);
    }
    auto cursor = list.end();     // cursor 위치

    cin >> n;
    while (n--)
    {
        char s;
        cin >> s;

        if (s == 'L')            // L일때 커서 왼쪽한칸
        {
            if (cursor != list.begin())  // 맨앞이면 무시
            {
                cursor--;
            }
        }
        else if (s == 'D')   // D일때 커서 오른쪽한칸
        {
            if (cursor != list.end())  // 맨앞이면 무시
            {
                cursor++;
            }
        }
        else if (s == 'B')    // B일때 커서 왼쪽 한칸
        {
            if (cursor != list.begin())     // 맨앞이면 무시
            {
                cursor--;
                cursor = list.erase(cursor);     // 커서위치 값지우고 커서그대로 조정
            }
        }
        else // P일때 커서 왼쪽저장
        {
            char adds;
            cin >> adds;

            list.insert(cursor, adds);
        }
    }
    for (auto a : list)
    {
        cout << a;
    }
}
