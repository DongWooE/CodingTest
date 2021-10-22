#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(vector<string>v, int N) {
	string s = v[0];
	int n = s.size();
	for(int i =1; i < N; i++){
		for (int j = 0; j < n; j++) {
			if (s[j] != v[i][j]) s[j] = '?';
		}
	}
	cout << s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int M = N;
	vector<string>v;

	while (N--) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	solve(v, M);
}