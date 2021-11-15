#include<iostream>
#include<vector>
using namespace std;

int v[9] = { 0, };

void dfs(int cur, int cnt, const int N, const int M) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			cout << v[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = cur; i <= N; i++) {
		v[cnt] = i;
		dfs(i, cnt + 1, N, M);
	}
}

void solve(int N, int M) {
	dfs(1, 0, N, M);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	solve(N, M);
}