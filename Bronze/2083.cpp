// 2083.cpp 럭비 클럽

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int a, b;

    while (true)
    {
        a = 0;
        b = 0;
        cin >> name >> a >> b;

        if (name == "#" && a == 0 && b == 0)
        {
           break;
        }

        cout << name << ' ';
        if (a > 17 || b >= 80)
        {
            
            cout << "Senior" << '\n';
        }
        else
        {
            cout << "Junior" << '\n';
        }
    }

    return 0;
}