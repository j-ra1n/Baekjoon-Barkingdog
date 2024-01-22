// 이것이 코딩 테스트다 상하좌우.cpp

#include <bits/stdc++.h>

using namespace std;

int n;
string str;
int x = 1, y = 1;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char mov[4] = {'D', 'R', 'U', 'L'};

int main()
{
    cin >> n;
    cin.ignore(); // 버퍼비우기
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        int nx;
        int ny;

        for (int dir = 0; dir < 4; dir++)
        {
            if (str[i] == mov[dir])
            {
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
        }

        if (nx < 1 || ny < 1 || nx > n || ny > n)  // 사각형 범위 나가면 무시
        {
            continue;
        }

        x = nx;
        y = ny;
    }

    cout << x << ' ' << y;
}