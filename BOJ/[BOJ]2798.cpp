#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int N, vector<int>v, int M) {
	int r = 3;
	int ans = 0;		//결과값 저장
	vector<bool>state(N, true);
	for (int i = 0; i < r; i++)
		state[i] = false;
	do {
		int sum = 0;
		for (int i = 0; i < N; i++)
			if (!state[i]) sum += v[i];
		if (sum > M) continue;		// M을 넘는 경우
		if (!(M - sum)) return M;	//M과 같은 경우
		ans = ((M - sum)< (M-ans)) ? sum : ans;
	} while (next_permutation(state.begin(), state.end()));
	return ans;
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<int>v;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cout << solve(N, v, M);
}