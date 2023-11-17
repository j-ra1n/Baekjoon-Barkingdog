// 10886.cpp 0 = not cute / 1 = cute
#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt1=0, cnt2=0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    if (cnt1 < cnt2)
    {
        cout << "Junhee is not cute!";
    }
    else
    {
        cout << "Junhee is cute!";
    }
}