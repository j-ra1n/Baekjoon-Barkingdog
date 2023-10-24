// 10773.cpp 제로

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<int> s;
    int n;
    int val;
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (val == 0)      // 문제에 정수가 "0" 일 경우 지울 수 있는 수가 있음을 
        {                  // 보장할 수 있다고 했으니 처음 부른수가 0일 경우는
            s.pop();       // 생각안해도 됨
        }
        else
        {
            s.push(val);
        }
    }

    while (!s.empty())
    {
        cnt += s.top();
        s.pop();
    }

    cout << cnt;
}