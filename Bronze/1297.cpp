// 1297.cpp TV 크기

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, w, h;
    cin >> d >> h >> w;

    double l = sqrt(w * w + h * h);
    double x = w * d / l;
    double y = h * d / l;
    
    cout << (int)y << " " << (int)x;
}