#include <bits/stdc++.h> 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	priority_queue <int, vector<int>, greater<int> > pq;

	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		int num2;
		cin >> num2;
		if (num2 == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else {
			pq.push(num2);
		}
	}

	return 0;
}
