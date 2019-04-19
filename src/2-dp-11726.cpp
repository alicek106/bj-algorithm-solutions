#include <bits/stdc++.h> 
using namespace std;

int tiles[1000001];

int main() {
	tiles[1] = 1;
	tiles[2] = 2;

	int num;
	cin >> num;

	for (int i = 3; i <= num; i++) {
		tiles[i] = (tiles[i - 1] + tiles[i - 2]) % 10007;
	}

	cout << tiles[num];
	return 0;
}
