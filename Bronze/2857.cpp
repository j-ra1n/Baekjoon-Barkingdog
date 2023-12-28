// 2857.cpp FBI

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    int i = 1;
    bool f = false;

    while (i < 6)
    {
        getline(cin, str);

        if (str.find("FBI") != string::npos)
        {
            cout << i << ' ';
            f = true;
        }
        i++;
    }

    if (!f)
    {
        cout << "HE GOT AWAY!";
    }
}