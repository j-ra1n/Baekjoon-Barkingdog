// 10845.cpp 큐

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n;
int arr[10001] = {0};
int tail = 0, head = 0;

void push(int x)
{
    arr[tail++] = x;
}
void pop()
{
    head++;
}
int front()
{
    return arr[head];
}
int back()
{
    return arr[tail - 1];
}

int main()
{
    cin >> n;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (str == "push")
        {
            int x;
            cin >> x;
            push(x);
        }
        else if (str == "pop")
        {
            if (tail == head)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << front() << '\n';
                pop();
            }
        }
        else if (str == "size")
        {
            cout << tail - head << '\n';
        }
        else if (str == "empty")
        {
            if (tail == head)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (str == "front")
        {
            if (tail == head)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << front() << '\n';
            }
        }
        else // back
        {
            if (tail == head)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << back() << '\n';
            }
        }
    }
}