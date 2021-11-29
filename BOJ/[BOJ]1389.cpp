#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void solve(vector<vector<int>>E, int N) {
	vector<int>v(N, 0);
	queue<int>Q;

	for (int i = 0; i < N; i++) {
		vector<int>visited(N, 0);
		visited[i] = 1;
		Q.push(i);
		while (!Q.empty()) {
			int t = Q.front();
			int cnt = visited[t];
			Q.pop();
			for (auto next : E[t]) {
				if (!visited[next]) {
					visited[next] = cnt+1;
					Q.push(next);
				}
			}
		}
		int sum = 0;
		for (auto j : visited)
			sum += j - 1;
		v[i] = sum;
	}

	int min = 0;
	for (int i = 1; i < v.size(); i++) if (v[min] > v[i]) min = i;
	cout << min+1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	vector<vector<int>>E(N);
	E.resize(N);
	while (M--) {
		int t1, t2;
		cin >> t1 >> t2;
		E[t1-1].push_back(t2-1);
		E[t2-1].push_back(t1-1);
	}
	solve(E, N);
}