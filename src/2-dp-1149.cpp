#include <bits/stdc++.h> 
using namespace std;

int arr[1001][3];
int min_value[1001][3];

int main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	min_value[0][0] = arr[0][0];
	min_value[0][1] = arr[0][1];
	min_value[0][2] = arr[0][2];

	for (int i = 1; i < count; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				min_value[i][0] = arr[i][0] + min(min_value[i-1][1], min_value[i-1][2]);
			}
			else if (j == 1) {
				min_value[i][1] = arr[i][1] + min(min_value[i-1][0], min_value[i-1][2]);
			}
			else if (j == 2) {
				min_value[i][2] = arr[i][2] + min(min_value[i-1][0], min_value[i-1][1]);
			}
		}
	}

	cout << min(min(min_value[count-1][0], min_value[count - 1][1]), min_value[count - 1][2]);

	return 0;
}
