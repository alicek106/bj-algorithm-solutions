#include <bits/stdc++.h> 
using namespace std;

int main() {
	vector< pair<int, int> > v;

	int num, start, fin;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> start >> fin;
		v.push_back(make_pair(fin, start));
	}

	sort(v.begin(), v.end());

	int count = 0, current = 0;

	for (int i = 0; i < v.size(); i++) {
		if (current <= v[i].second) {
			count++;
			current = v[i].first;
		}
	}
	cout << count;
	return 0;
}
