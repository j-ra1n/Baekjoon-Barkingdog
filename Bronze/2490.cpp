// 2490.cpp 윷놀이
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0, Tc = 3;
    vector<int> v(4);

    while (Tc != 0)
    {

        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];

            if (v[i] == 1)
            {
                cnt++;
            }
        }

        if (cnt == 2)
        {
            cout << "B" << '\n';
        }
        else if (cnt == 1)
        {
            cout << "C" << '\n';
        }
        else if (cnt == 0)
        {
            cout << "D" << '\n';
        }
        else if (cnt == 3)
        {
            cout << "A" << '\n';
        }
        else
        {
            cout << "E" << '\n';
        }

        Tc--;
        cnt = 0;
    }
}