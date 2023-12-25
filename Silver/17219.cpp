// 17219.cpp 비밀번호 찾기

#include <iostream>
#include <string>
#include <map>

using namespace std;
string arr[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    map<string, string> pass;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string input1, input2;
        cin >> input1 >> input2;
        pass.insert({input1, input2});
    }

    for (int i = 0; i < m; i++)
    {
        string result;
        cin >> result;
        map<string, string>::iterator cursor = pass.find(result);
        if (pass.find(result) != pass.end())
        {
            cout << cursor->second << '\n';
        }
    }
}