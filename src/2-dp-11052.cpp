#include <bits/stdc++.h> 
using namespace std;

int dp[100000];

int main() {
	vector<int> value;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int num;
		cin >> num;
		value.push_back(num);
	}
	
	dp[0] = 0;
	for (int i = 1; i <= count; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i-j] + value[j-1]);
		}
	}
	cout << dp[count];
	return 0;
}
