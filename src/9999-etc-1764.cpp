#include<bits/stdc++.h>
using namespace std;

int main() {
	map<string, bool> name;
	vector<string> v;

	int num1, num2;
	cin >> num1 >> num2;
	string input;

	for (int i = 0; i < num1; i++) {
		cin >> input;
		name[input] = true;
	}

	for (int i = 0; i < num2; i++) {
		cin >> input;
		if (name.find(input) != name.end()) {
			v.push_back(input);
		}
	}

	cout << v.size() << '\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}
