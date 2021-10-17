#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string number = "12345678";

void solve(int N, int M) {
	vector<string>ans;
	string temp = number.substr(0, N);
	vector<bool>c(N, true);
	for (int i = 0; i < M; i++) c[i] = !c[i];
	do {
		for (int i = 0; i < N; i++)
			if(!c[i]) cout << temp[i] << " ";
		cout << "\n";
	} while (next_permutation(c.begin(), c.end()));
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N,M;
	cin >> N >> M;
	solve(N, M);
}