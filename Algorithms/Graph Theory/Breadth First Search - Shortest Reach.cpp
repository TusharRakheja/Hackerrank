#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int q;
	cin >> q;
	while (q--) {
		int m, n, s;
		cin >> n >> m;
		vector<int> * adj = new vector<int>[n];
		int * dist = new int[n];
		for (int i = 0; i < n; i++) {
			dist[i] = -1;
		}
		for (int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
			adj[u - 1].push_back(v - 1);
			adj[v - 1].push_back(u - 1);
		}
		cin >> s;
		s--;
		queue<int> q_;
		q_.push(s);
		int current_dist = 0;
		while (!q_.empty()) {
			int qsize = q_.size();
			for (int i = 0; i < qsize; i++) {
				int node = q_.front();
				q_.pop();
				if (dist[node] == -1) {
					dist[node] = current_dist;
					for (int connection : adj[node]) {
						if (dist[connection] == -1) {
							q_.push(connection);
						}
					}
				}
			}
			current_dist += 6;
		}
		for (int i = 0; i < n; i++) {
			if (i != s)
				cout << dist[i] << " ";
		}
		cout << endl;
		delete[] adj;
		delete[] dist;
	}
	return 0;
}