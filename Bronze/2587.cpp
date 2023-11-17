// 2587.cpp 대표값2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int avg = 0, mid = 0;
    vector<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        avg += v[i];
    }

    sort(v.begin(), v.end());

    cout << avg / 5 << '\n'
         << v[2];
}