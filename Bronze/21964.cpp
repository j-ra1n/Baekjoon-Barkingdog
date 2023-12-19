// 21964.cpp 선린인터넷 고등학교

#include <iostream>
#include <string>
using namespace std;

int i;
string str;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    cin >> i >> str;
    cout << str.substr(i - 5);
}