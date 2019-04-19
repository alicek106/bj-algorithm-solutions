#include <bits/stdc++.h> 
using namespace std;

int main() {
	int namu, sum;
	cin >> namu >> sum;

	vector<long long> v;
	for (int i = 0; i < namu; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	long long left = 0;
	long long right = LLONG_MAX;
	long long result = 0;
	long long mid;
	int max = 0;

	while (left <= right) {
		result = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < v.size(); i++) {
			long long itor = v[i] - mid;
			if (itor > 0) {
				result = result + itor;
			}
		}
		if (result < sum) {
			right = mid - 1;
		}
		else if(result >= sum){
			if (max < mid) {
				max = mid;
			}
			left = mid + 1;
		}
	}
	cout << max;
	return 0;
}
