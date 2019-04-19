#include<bits/stdc++.h>
using namespace std;

bool visit[1001];
vector<int> nodes[1001];

void dfs(int start) {
	if (visit[start] == true) {
		return;
	}

	// cout << start << " ";
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
		// cout << current << " ";
		
		for (int i = 0; i < nodes[current].size(); i++) {
			if (visit[nodes[current][i]] != true) {
				visit[nodes[current][i]] = true;
				q.push(nodes[current][i]);
			}
		}
	}
}

int main() {
	int node_count, edges;
	cin >> node_count >> edges;

	for (int i = 0; i < edges; i++) {
		int edge1, edge2;
		cin >> edge1 >> edge2;
		nodes[edge1].push_back(edge2);
		nodes[edge2].push_back(edge1);
	}

	int sum = 0;
	for (int i = 1; i < node_count + 1; i++) {
		if (visit[i] != true) {
			bfs(i);
			sum++;
		}
	}

	cout << sum;
	return 0;
}
