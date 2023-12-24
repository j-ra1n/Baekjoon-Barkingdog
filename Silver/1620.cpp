// 1620.cpp 나는야 포켓몬 마스터 이다솜

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string arr[100001];
    int n, m;

    map<string, int> poke;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        arr[i] = str;
        poke.insert({str, i});
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;

        if (str[0] >= '1' && str[0] <= '9')
        {
            int cursor = stoi(str);
            cout << arr[cursor] << '\n';
        }
        else
        {
            map<string, int>::iterator cursor = poke.find(str);
            cout << cursor->second << '\n';
        }
    }
}