// 10828.cpp 스택

#include <iostream>
#include <string>
using namespace std;

int n;
int arr[10001] = {0};
int pos = 0;

void push(int x)
{
    arr[pos++] = x;
}
void pop()
{
    pos--;
}
int top()
{
    return arr[pos - 1];
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
        if (str == "push")
        {
            int x;
            cin >> x;
            push(x);
        }
        else if (str == "pop")
        {
            if (pos == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << top() << '\n';
                pop();
            }
        }
        else if (str == "size")
        {
            cout << pos << '\n';
        }
        else if (str == "empty")
        {
            if (pos == 0)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else // top
        {
            if (pos == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << top() << '\n';
            }
        }
    }
}
