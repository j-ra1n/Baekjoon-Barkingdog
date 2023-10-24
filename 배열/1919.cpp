// 1919.cpp 애너그램 만들기
 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[2][26] = {0};
    int cnt = 0;

    string str, str2;

    cin >> str >> str2;

    for (int i = 0; i < str.length(); i++)
    {
        arr[0][str[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        arr[1][str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cnt += abs(arr[0][i] - arr[1][i]); // abs(int n) 절대값함수 절대값n반환
    }

    cout << cnt;
}
