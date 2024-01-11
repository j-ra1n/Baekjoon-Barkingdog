// 11945.cpp 뜨거운 붕어빵

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t1, t2;
    cin >> t1 >> t2;

    string str;

    vector<string> v;

    for (int i = 0; i < t1; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < t1; i++)
    {
       
        reverse(v[i].begin(), v[i].end());
        cout << v[i] << "\n";
    }

    return 0;
}