#include<iostream>
using namespace std;

int cnt = 10000000;

void dfs(int N, int M) {
	if (N == 1) {
		cnt = (cnt > M) ? M : cnt;
		return;
	}
	if (M > cnt) return;
	if (N % 3 == 0) dfs(N / 3, M + 1);
	if (N % 2 == 0) dfs(N / 2, M + 1);
	dfs(N - 1, M + 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	dfs(N, 0);
	cout << cnt;
}