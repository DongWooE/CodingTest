#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string number = "12345678";

void solve(int N, int M) {
	vector<string>ans;
	string temp = number.substr(0, N);

	do {
		for (int i = 0; i < M; i++)
			cout << temp[i] << " ";
		cout << "\n";
		reverse(temp.begin() + M, temp.end());
	} while (next_permutation(temp.begin(), temp.end()));
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N,M;
	cin >> N >> M;
	solve(N, M);
}