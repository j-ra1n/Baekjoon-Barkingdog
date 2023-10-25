// 28278.cpp 스택 2

#include <iostream>

using namespace std;

int arr[1000001] = {0};
int n;
int pos = 0;

void one(int x) // push()
{
    arr[pos++] = x;
}

int two() // pop()
{
    return arr[pos - 1];
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
            one(x);
        }
        else if (a == 2)
        {
            if (pos == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << two() << '\n';
                pos--;
            }
        }
        else if (a == 3) // size()
        {
            cout << pos << '\n';
        }
        else if (a == 4)
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
        else
        {
            if (pos == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << two() << '\n';
            }
        }
    }
}
