#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

int v[51][51];

void solve(int M,int N, int K) {
	while (K--) {
		int t1, t2;
		cin >> t1 >> t2;
		v[t1][t2] = 1;
	}

	queue<pair<int,int>>Q;
	
	int p1[4] = {1,0,0,-1};
	int p2[4] = {0,1,-1,0};

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!v[i][j])	continue;
			cnt++;
			Q.push(make_pair(i, j));
			while (!Q.empty()) {
				pair<int, int>t = Q.front();
				v[t.first][t.second] = 0;
				Q.pop();
				for (int k = 0; k < 4; k++) {
					int x = t.first + p1[k];
					int y = t.second + p2[k];
					if (x < 0 || x >= M) continue;
					if (y < 0 || y >= N) continue;
					if (!v[x][y]) continue;	//0이거나 이미 방문했다면
					v[x][y] = 0;		//★★ 방문체크는 반드시 queue에 넣기 전에 해줄것
					Q.push({ x, y });
				}
			}
		}
	}
	cout << cnt << "\n";
}

void trans() {
	for (int i = 0; i < 51; i++)
		for (int j = 0; j < 51; j++)
			v[i][j] = 0;
	}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int M, N, K;
		cin >> M >> N >> K;
		solve(M, N, K);
		trans();
	}
}