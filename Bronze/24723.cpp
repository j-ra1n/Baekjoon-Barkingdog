// 24723.cpp 녹색거탑

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 1;
	while (n--) {
		answer *= 2;
	}
	cout << answer;
}