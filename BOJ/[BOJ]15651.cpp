#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


void solve(int n, int m) {
	string temp = "";

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			temp += to_string(i);
		}
	}

	do {
		for (int i = 0; i < m; i++)
			cout << temp[i] << " ";
		cout << "\n";
		reverse(temp.begin() + m, temp.end());
	} while (next_permutation(temp.begin(), temp.end()));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M = 3, N = 3;
	cin >> N >> M;
	solve(N, M);
}