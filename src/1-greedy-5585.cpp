#include <bits/stdc++.h> 
using namespace std;

int main() {
	int val;
	cin >> val;
	int arr[6] = {500, 100, 50, 10, 5, 1};
	int input = 1000 - val;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		if (input < arr[i]) {
			continue;
		}
		else {
			int div = input / arr[i];
			sum = sum + div;
			input = input - div * arr[i];
		}
	}

	cout << sum;
	return 0;
}
