// 1158.cpp 요세푸스 문제

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list = {};
    int n, k;
    cin >> n >> k;

    auto cursor = list.end();
    for (int i = 1; i <= n; i++) // list에 값 저장
    {
        list.insert(cursor, i);
    }

    cursor = list.begin();     // cursor 첫번째로
    cout << "<";
    while (list.size() != 1)    // list가 사이즈가1이될때까지 반복
    {

        for (int i = 1; i < k; i++)    // cursor를 k번째까지 조정
        {
            cursor++;
            if (cursor == list.end())    // 만약 끝이면 다시 처음으로 (원형리스트)
            {
                cursor = list.begin();
            }
        }

        cout << *cursor << ", ";
        cursor = list.erase(cursor);   // 출력후 cursor값 erase
        if (cursor == list.end())     // 끝이면 다시 처음으로
        {
            cursor = list.begin();
        }
    }
    cout << *cursor << ">";
}