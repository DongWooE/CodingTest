#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void solve(vector<pair<int,int>> v) {
	int a[5] = { 0,};
	for (auto i : v) {
		if (!i.first || !i.second) {
			a[4]++;
			continue;
		}
		if (i.first > 0) {
			if (i.second > 0) a[0]++;
			else a[3]++;
		}
		else {
			if (i.second > 0) a[1]++;
			else a[2]++;
		}
	}

	for (int i = 0; i < 4; i++)
		cout << "Q" << i+1 << ": " << a[i] << "\n";
	cout << "AXIS: " << a[4] << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int,int>> v;
	int n;
	cin >> n;

	while(n--) {
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		v.push_back(temp);
	}

	solve(v);
}