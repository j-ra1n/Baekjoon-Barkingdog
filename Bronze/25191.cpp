// 25191.cpp 치킨대스를 추는 곰곰이를 본 임스

#include <iostream>
using namespace std;

int main()
{

    int chicken, coke, beer;
    
    cin >> chicken >> coke >> beer;
    cout << min(chicken, coke / 2 + beer);
}