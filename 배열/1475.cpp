// 1475.cpp 방 번호 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[9] = {0};
    int max = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char str1 = str[i];
        int a = str1 - '0'; // int로 형변환
        arr[a] += 1;
    }

    /* 
    int n;
    cin >> n;
    while (n)
    {
        arr[n % 10]++;
        n /= 10;
    }               형변환없이 이렇게 저장하면 간편하다. 
    */            

    for (int i = 0; i < 10; i++) // 6,9칸 제외한 max값 찾기
    {
        if (i == 6 || i == 9)
        {
            continue;
        }
        else
        {
            if (max <= arr[i])
            {
                max = arr[i];
            }
        }
    }

    if (arr[6] == 0 && arr[9] == 0)
    {

        cout << max;
    }
    else
    {
        int sum = 0;
        sum = (arr[6] + arr[9] + 1) / 2;

        if (max >= sum)
        {
            cout << max;
        }
        else
        {

            cout << sum;
        }
    }
}
