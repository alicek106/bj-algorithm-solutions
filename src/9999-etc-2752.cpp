#include <bits/stdc++.h> 
using namespace std;

int main() {

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	vector<int> v;
	v.push_back(num1);
	v.push_back(num2);
	v.push_back(num3);

	sort(v.begin(), v.end());

	for (int i = 0; i < 3; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
