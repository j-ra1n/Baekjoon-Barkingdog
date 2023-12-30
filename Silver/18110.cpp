// 18110 solved.ac

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(double i, double j)
{
    return i > j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n;
    double res = 0;
    vector<double> vd;
    cin >> n;

    if (n == 0)
    {
        cout << res;
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        double d;
        cin >> d;
        vd.push_back(d);
    }
    sort(vd.begin(), vd.end());

    int c = floor(n * 0.15 + 0.5);

    for (int i = 0; i < n - c; i++)
    {
        res += vd[i];
    }

    for (int i = 0; i < c; i++)
    {
        res -= vd[i];
    }

    cout << floor(res / (n - c * 2) + 0.5);
}