#include <bits/stdc++.h> 
using namespace std;

bool is_exist(vector<int> &origin, int target) {
	int start = 0, end = origin.size() - 1;

	while (start <= end) {
		int mid = (start + end) / 2 ;
		if (target > origin[mid]) {
			start = mid + 1;
		}
		else if (target < origin[mid]) {
			end = mid - 1;
		}
		else {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);;
	cin.tie(NULL);

	vector<int> origin;
	vector<int> target;

	int count1, count2;
	int num;

	cin >> count1;
	for (int i = 0; i < count1; i++) {
		cin >> num;
		origin.push_back(num);
	}
	
	sort(origin.begin(), origin.end());

	cin >> count2;
	for (int i = 0; i < count2; i++) {
		cin >> num;
		target.push_back(num);
	}

	for (int i = 0; i < target.size(); i++) {
		if (is_exist(origin, target[i])) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}

	return 0;
}
