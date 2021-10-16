#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int N, vector<int>&v, int S) {
	vector<bool>state(N, true);
	int cnt = 0;
	for (int r = 1; r <= N; r++) {
		for (int i = 0; i < r; i++) {
			state[i] = false;
		}
		do {
			int sum = 0;
			for(int i =0; i < N; i++)
				if(!state[i]) sum += v[i];
			if (sum == S) {
				cnt++;
			} 
		} while (next_permutation(state.begin(), state.end()));
	}
	return cnt;
}

int main() {	
	int N, S;
	cin >> N >> S;
	vector<int>v;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cout << solve(N, v, S);
}