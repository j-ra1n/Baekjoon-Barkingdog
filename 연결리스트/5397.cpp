// 5397.cpp 키로거

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    list<char> list = {};
    string str;

    cin >> n;

    while (n--)
    {
        cin >> str;

        auto cursor = list.end();   // 커서위치

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '<')        // '<' 일때 커서 왼쪽한칸
            {
                if (list.begin() != cursor)
                {
                    cursor--;
                }
            }
            else if (str[i] == '>')    // '<' 일대 커서 오른쪽한칸
            {
                if (list.end() != cursor)
                {
                    cursor++;
                }
            }
            else if (str[i] == '-')        // '-' 일때 커서왼쪽 문자 지우기
            {
                if (list.begin() != cursor)
                {
                    cursor--;
                    cursor = list.erase(cursor);
                }
            }
            else                        // 나머지문자 커서위치 삽입
            {
                list.insert(cursor, str[i]);
            }
        }

        for (auto a : list)    // list 출력
        {
            cout << a;
        }
        cout << '\n';

        while (!list.empty())     // list 초기화
        {
            list.pop_front();
        }
    }
}
