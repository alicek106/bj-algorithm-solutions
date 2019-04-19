#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int count;
	cin >> count;
	vector<pair<int, int> > agev;
	vector<string> namev;

	for (int i = 0; i < count; i++) {
		int age;
		string name;
		cin >> age;
		cin >> name;
		agev.push_back(make_pair(age, i));
		namev.push_back(name);
	}

	sort(agev.begin(), agev.end());
	for (int i = 0; i < agev.size(); i++) {
		cout << agev[i].first << " " << namev[agev[i].second] << '\n';
	}

	return 0;
}
