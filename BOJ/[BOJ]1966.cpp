#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void solve(int m, vector<pair<int,int>>v) {
	int cnt = 1;
	while (!v.empty()){
		int t1 = v.front().first;
		bool flag = true;
		for (int i = 1; i < v.size(); i++) {
			if (v[i].first > t1) {
				flag = false;
				break;
			}
		}
		if (flag) {
			if (v.front().second == m) {
				cout << cnt << "\n";
				break;
			}
			v.erase(v.begin(), v.begin() + 1);
			cnt++;
		}
		else{
			v.push_back(v.front());
			v.erase(v.begin(), v.begin() + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		vector<pair<int,int>>v;
		int i = 0;
		while (N--) {
			int t;
			cin >> t;
			v.push_back({t, i});
			i++;
		}
		solve(M, v);
	}
}