// 10808.cpp 알파벳 개수

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;
    cin >> str;

    for (char a = 'a'; a <= 'z'; a++)   // a=97 z=122 와 같다.
    {
        int cnt = 0;

        for (auto i : str) // str이 i에 복사후 i는 자동형변환
        {

            if (a == i)
            {
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
}