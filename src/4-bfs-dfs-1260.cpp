#include<bits/stdc++.h>
using namespace std;

bool visit[1001];
vector<int> nodes[1001];

void dfs(int start) {
	if (visit[start] == true) {
		return;
	}

	cout << start << " ";
	visit[start] = true;

	for (int i = 0; i < nodes[start].size(); i++) {
		if (visit[nodes[start][i]] != true) {
			dfs(nodes[start][i]);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty()) {
		int current = q.front();
		q.pop();
		cout << current << " ";
		
		for (int i = 0; i < nodes[current].size(); i++) {
			if (visit[nodes[current][i]] != true) {
				visit[nodes[current][i]] = true;
				q.push(nodes[current][i]);
			}
		}
	}
}

int main() {
	int nodes_count, edges, start;
	cin >> nodes_count >> edges >> start;
	for (int i = 0; i < edges; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		nodes[num1].push_back(num2);
		nodes[num2].push_back(num1);
	}

	for (int i = 0; i < nodes_count; i++) {
		sort(nodes[i].begin(), nodes[i].end());
	}

	dfs(start);
	memset(visit, false, sizeof(visit));
	cout << endl;
	bfs(start);

	return 0;
}
