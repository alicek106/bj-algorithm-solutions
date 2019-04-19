#include <bits/stdc++.h> 
using namespace std;

int main() {
	vector<int> v;

	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum = sum +( (count - i) * (v[i]));
	}
	cout << sum;
	return 0;
}
