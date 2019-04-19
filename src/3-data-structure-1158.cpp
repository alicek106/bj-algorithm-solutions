#include<bits/stdc++.h>
using namespace std;

vector<int> get_joseph(int num1, int num2) {
	vector<int> answer;
	list<int> data;
	for (int i = 1; i <= num1; i++) {
		data.push_back(i);
	}
	list<int>::iterator itor = data.begin();
	while (!data.empty()) {
		for (int i = 0; i < num2-1; i++) {
			if (itor == data.end()) {
				itor = data.begin();
			}
			itor++;
			if (itor == data.end()) {
				itor = data.begin();
			}
		}
		list<int>::iterator save_point = itor;
		save_point++;
		answer.push_back(*itor);
		data.erase(itor);
		itor = save_point;
	}
	return answer;
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	vector<int> answer = get_joseph(num1, num2);
	cout << '<';
	for (int i = 0; i < answer.size(); i++) {
		if (i != answer.size() - 1) {
			cout << answer[i] << ", ";
		}
		else {
			cout << answer[i];
		}
	}
	cout << '>';
	return 0;
}
