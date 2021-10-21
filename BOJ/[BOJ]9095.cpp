#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int d[11] = {0,};

int dp(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if(d[n]) return d[n];
	return dp(n - 1) + dp(n - 2) + dp(n - 3);
}

vector<int> solve(vector<int>v) {
	vector<int>ans;
	for (int i = 0; i < v.size(); i++)
		ans.push_back(dp(v[i]));
	return ans;
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	vector<int>v;
	while (T--) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	vector<int>ans = solve(v);
	for (auto a : ans)
		cout << a << "\n";
}