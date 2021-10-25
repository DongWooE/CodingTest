#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int> v) {
	sort(v.begin(), v.end());
	int m = (v.size() % 2 == 0) ? v.size() / 2 - 1 : v.size() / 2;
	return v[m];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int>v;
	while (N--) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cout << solve(v);
}