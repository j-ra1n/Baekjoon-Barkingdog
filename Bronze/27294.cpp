// 27294.cpp 밥알이 몇개고?
#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T, S;
    cin >> T >> S;
    if(S == 0 && (12 <= T && T <= 16))
        cout << "320";
    else
        cout << "280";
    return 0;
}