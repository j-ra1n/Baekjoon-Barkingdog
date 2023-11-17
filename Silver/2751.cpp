// 2751.cpp 수 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int temp;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        //v.insert(v.begin(),temp);  //이건왜 시간초과가 될까?
        v.push_back(temp);
        
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << '\n';
    }
}