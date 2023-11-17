// 1874.cpp 스택 수열
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int number = 1;
    int result = 0;
    

    stack<int> st;
    vector<int> sq(N,0);
    vector<char> ch;

    for (int i = 0; i < N; i++)
    {
        cin >> sq[i];
    }

    for (int i = 0; i < sq.size(); i++)
    {
        int sqq = sq[i];

        if (sqq >= number)
        {
            while (sqq >= number)
            {
                st.push(number);
                ch.push_back('+');
                number++;
            }
            st.pop();
            ch.push_back('-');
        }
        else
        {
            int tn = st.top();
            st.pop();
            if (tn > sqq)
            {
                cout << "NO";
                result = 1;
                break;
            }
            else
            {
                ch.push_back('-');
            }
        }
    }

    if (result == 0)
    {
        for (int i = 0; i < ch.size(); i++)
        {
            cout << ch[i] << '\n';
        }
    }
}