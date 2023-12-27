// 2506.cpp 점수계산

#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int cnt = 0; 
    int res[100]; 
    int bonus = 0;

    cin >> n;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> res[i];

        if (res[i] == 1)
        {
            cnt++;
            if (res[i - 1] == 1)
            {
                bonus++;
                cnt += bonus;
            }
            else
            {
                bonus = 0;
            }
        }
    }
    cout << cnt;

    
}
