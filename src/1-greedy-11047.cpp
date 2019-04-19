#include <bits/stdc++.h> 
using namespace std;

int get_minimum(vector<int> inputs, int goal) {
	int sum = 0;
	int ramnent = goal;
	for (int i = inputs.size() - 1; i >= 0; i--) {
		if (ramnent < inputs[i]) {
			// Do nothing
		}
		else {
			sum = sum + (ramnent / inputs[i]);
			ramnent  = ramnent - (ramnent / inputs[i]) * inputs[i];
		}
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int> values;
	int val, sum, input;
	cin >> val >> sum;

	for (int i = 0; i < val; i++) {
		cin >> input;
		values.push_back(input);
	}

	cout << get_minimum(values, sum);
	return 0;
}
