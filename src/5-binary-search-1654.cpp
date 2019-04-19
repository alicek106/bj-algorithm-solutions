#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios::sync_with_stdio(false);;
	cin.tie(NULL);

	long long count, lan_line;
	cin >> count >> lan_line;
	
	vector<long long> lans;

	for (int i = 0; i < count; i++) {
		long long input;
		cin >> input;
		lans.push_back(input);
	}
	
	long long left = 0, right = LLONG_MAX;
	long long max_cen = -1;

	while(left <= right){
		long long mid = (right + left) / 2;
		int sum = 0;

		for (int i = 0; i < lans.size(); i++) {
			sum = sum + lans[i] / mid;
		}

		// 너무 크게 잘랐을 경우
		if (sum < lan_line) {
			right = mid - 1;
		}
		// 너무 작게 잘랐을 경우 -> mid가 늘어나야 함
		else if (sum > lan_line){
			if (mid > max_cen) {
				max_cen = mid;
			}
			left = mid + 1;
		}
		else if (sum == lan_line) {
			if (mid > max_cen) {
				max_cen = mid;
			}
			left = mid + 1;
		}
	}

	cout << max_cen;
	return 0;
}
