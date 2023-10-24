// 2164.cpp 카드2

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    queue<int> q;
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)  // 큐에 값삽입
    {
        q.push(i);
    }

    while (q.size() != 1)    // size 1이면 한장남은경우
    {
        q.pop();  
        q.push(q.front());
        q.pop();
    }

    cout << q.front();
}
