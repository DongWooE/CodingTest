#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<math.h>
#define MAX 65000
using namespace std;

int calcDistance(pair<int,int>p1, pair<int,int>p2) {
	return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

void solve(vector<pair<int,int>>c, vector<pair<int,int>>h,  int m) {
	int size_c = c.size(), size_h = h.size();
	int min = MAX;
	vector<bool>v(size_c, true);
	
	for (int i = 0; i < m; i++)		//13
		v[i] = false;

	do {
		int sum = 0;
		for (int i = 0; i < size_h; i++) {		// 100
			int distance = MAX;
			for (int j = 0; j < size_c; j++) {		//
				if (!v[j]) {
					int dis = calcDistance(c[j], h[i]);
					if (distance > dis) distance = dis;
				}
			}
			sum += distance;
		}
		if (sum < min) min = sum;
	} while (next_permutation(v.begin(), v.end()));
	cout << min;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<pair<int, int>> chicken;
	vector<pair<int, int>> house;

	for (int i = 0; i < N; i++) {		// 50
		for (int j = 0; j < N; j++) {		// 50
			int temp;
			cin >> temp;
			if (!temp) continue;
			else if (temp == 1) house.push_back(make_pair(i, j));
			else chicken.push_back(make_pair(i, j));
		}
	}

	solve(chicken, house, M);
}