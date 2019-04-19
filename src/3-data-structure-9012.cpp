#include<bits/stdc++.h>
using namespace std;

string check(string input) {
	stack<char> s;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') {
			s.push(input[i]);
		}
		else {
			if (s.size() != 0) {
				s.pop();
			}
			else {
				return "NO";
			}
		}
	}
	if (s.empty()) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main() {
	int num;
	string input;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input;
		cout << check(input) << endl;
	}
	return 0;
}
