// 왕실의나이트.cpp

#include <bits/stdc++.h>

using namespace std;

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

int main()
{
    string input;
    cin >> input;
    int row = (input[0] - 'a') + 1;
    int col = input[1] - '0';

    int res = 0;

    int nx = 0;
    int ny = 0;

    for (int dir = 0; dir < 8; dir++)
    {
        nx = col + dx[dir];
        ny = row + dy[dir];

        if (nx < 1 || nx > 8 || ny < 1 || ny > 8)
        {
            continue;
        }
        else
        {
            res++;
        }
    }

    cout << res;
}