#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int c[100001] = { 0, };

void solve(int N, int K) {
	queue<pair<int,int>>Q;
	c[N] = 1;
	Q.push({ N,0 });

	pair<int,int> t;
	while (!Q.empty()) {
		t = Q.front();
		Q.pop();
		if (t.first == K) break;
		if (t.first+1 < 100001 && !c[t.first + 1]) {
			Q.push({ t.first + 1, t.second + 1 });
			c[t.first + 1] = 1;
		} 
		if (t.first - 1 >= 0 && !c[t.first-1]) {
			Q.push({ t.first - 1, t.second + 1 });
			c[t.first-1] = 1;
		}
		if (t.first*2 < 100001 && !c[2*t.first]) {
			Q.push({ 2 * t.first, t.second+1 });
			c[t.first * 2] = 1;
		}
	}
	cout << t.second << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	solve(N, K);
}

