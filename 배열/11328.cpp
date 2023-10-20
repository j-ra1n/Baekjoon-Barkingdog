// 11328.cpp Strfry

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str, str2;

    int arr[26] = {0};
    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bool t = true;
        cin >> str >> str2;
        int arr[26] = {0};

        for (int j = 0; j < str.length(); j++) // 첫번째 문자열은 arr배열에 +1
        {
            arr[str[j] - 'a'] += 1;
        }
        for (int k = 0; k < str2.length(); k++) // 두번째 문자열은 arr배열에 -1
        {
            arr[str2[k] - 'a'] -= 1;
        }

        for (int a : arr)
        {
            if (a != 0) // 배열 arr중에서 하나라도 0이아니면 false로 바꿈
            {
                t = false;
            }
        }

        if (t)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
}