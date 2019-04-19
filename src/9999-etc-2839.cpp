#include<bits/stdc++.h>
using namespace std;

int main() {
	int input;
	cin >> input;

	for (int i = input / 5; i >= 0; i--) {
		if ((input - i * 5) % 3 == 0) {
			cout << i + (input - i * 5) / 3;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
