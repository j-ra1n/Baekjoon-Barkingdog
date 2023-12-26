// 11948.cpp 과목선택

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1(4);
vector<int> v2(2);
int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < 2; i++)
    {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int result = 0;

    for (int i = 1; i <= 3; i++)
    {
        result += v1[i];
    }

    result += v2[1];

    cout << result;
}