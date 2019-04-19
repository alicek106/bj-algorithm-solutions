#include <bits/stdc++.h> 
using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		int c;
		c = a;
		a = b;
		b = c;
	}

	int c;
	do{
		c = a % b;
		a = b;
		b = c;
	} while (c != 0);

	return a;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b;

	cin >> a >> b;
	cout << gcd(a, b) << '\n' << a * b / gcd(a, b);
}
