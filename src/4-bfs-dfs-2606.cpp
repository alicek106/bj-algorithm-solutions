#include<bits/stdc++.h>
using namespace std;
vector<int> v[101];
bool visit[101];

void dfs(int start, int &count) {
	if (visit[start] == true) {
		return;
	}
	
	visit[start] = true;
	for (int i = 0; i < v[start].size(); i++) {
		if (visit[v[start][i]] != true) {
			count++;
			dfs(v[start][i], count);
		}
	}
}

int main() {
	int nodes, edges;
	cin >> nodes >> edges;

	for (int i = 0; i < edges; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		v[num1].push_back(num2);
		v[num2].push_back(num1);
	}

	int sum = 0;
	dfs(1, sum);

	cout << sum;
	return 0;
}
