// 10866.cpp 덱  

#include <iostream>
#include <string>
using namespace std;

int n;
int arr[20001] = {0};
int tail = 10000, head = 10000;

void push_front(int x)
{
    arr[--head] = x;
}
void push_back(int x)
{
    arr[tail++] = x;
}
void pop_front()
{
    head++;
}
void pop_back()
{
    tail--;
}
int front()
{
    return arr[head];
}
int back()
{
    return arr[tail-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (str == "push_front")
        {
            int x;
            cin >> x;
            push_front(x);
        }
        else if (str == "push_back")
        {
            int x;
            cin >> x;
            push_back(x);
        }
        else if (str == "pop_front")
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << front() << '\n';
                pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << back() << '\n';
                pop_back();
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
