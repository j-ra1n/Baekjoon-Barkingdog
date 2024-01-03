// 2231.cpp 분해합

#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
    cout.tie(0);
    
	int n;
	cin >> n;


	for (int i = 1; i < n; i++) {
		int t = i;
		int res = i;

		while (t != 0) {
			res += t % 10; 
			t /= 10;
		}

		if (res == n) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << 0 << '\n';
	
}