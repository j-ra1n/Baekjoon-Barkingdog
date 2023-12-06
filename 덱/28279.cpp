// 28279.cpp 덱 2 

#include <iostream>

using namespace std;
int arr[2000001] = {0};
int head = 1000000, tail = 1000000;
int n;

void push_front(int x) // 1
{
    arr[--head] = x;
}
void push_back(int x) // 2
{
    arr[tail++] = x;
}
void pop_front() // 3
{
    head++;
}
void pop_back() // 4
{
    tail--;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int x;
            cin >> x;
            push_front(x);
        }
        else if (a == 2)
        {
            int x;
            cin >> x;
            push_back(x);
        }
        else if (a == 3)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << arr[head] << '\n';
                pop_front();
            }
        }
        else if (a == 4)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << arr[tail - 1] << '\n';
                pop_back();
            }
        }
        else if (a == 5)
        {
            cout << tail - head << '\n';
        }
        else if (a == 6)
        {
            if (head == tail)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (a == 7)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << arr[head] << '\n';
            }
        }
        else // 8
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << arr[tail - 1] << '\n';
            }
        }
    }
}