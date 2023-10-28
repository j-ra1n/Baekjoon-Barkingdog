// 9012.cpp 괄호

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;
        stack<char> st;
        bool a = true;
      
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                st.push('(');
            }
            else                                      // ')' 인경우
            {
                if (st.empty() || st.top() != '(')
                {
                    a = false;
                    break;
                }

                st.pop();                            // st.top() == ( 이기때문에 쌍이맞으므로 빼줌
            }
        }

        if (!st.empty())               // 스택이 비어있지않으면 쌍이 안맞는것 a=false; 
        {
            a = false;
        }

        if (a)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
