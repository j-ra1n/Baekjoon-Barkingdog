// 4949.cpp 균형잡힌 세상

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;

    while (1)
    {

        getline(cin, str);
        stack<char> st;
        bool a = true;

        if (str == ".")
        {
            break;
        }

        for (int i = 0; i < str.length(); i++)
        {

            if (str[i] == '(')
            {
                st.push('(');
            }
            else if (str[i] == '[')
            {
                st.push('[');
            }
            else if (str[i] == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    a = false;
                    break;
                }

                st.pop();
            }
            else if (str[i] == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    a = false;
                    break;
                }

                st.pop();
            }
        }

        if (!st.empty())
        {
            a = false;
        }

        if (a)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
}