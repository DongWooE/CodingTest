#include<iostream>
#include<vector>
#include<string>
using namespace std;

int returnCnt(vector<string>v, int a, int b) {
	string c[2] = { "BWBWBWBW", "WBWBWBWB" };
	int cnt[2] = { 0, };
	for(int u =0; u <2; u++){
		int cur = u;
		for (int i =a ; i < a + 8; i++) {
			int cur_j = 0;
			for (int j = b; j < b + 8; j++) {
				if (c[cur][cur_j] != v[i][j]) cnt[u]++;
				cur_j++;
			}
			cur = (cur + 1) % 2;
		}
	}
	return (cnt[0] > cnt[1]) ? cnt[1] : cnt[0];
}

void solve(vector<string>v,int N, int M) {
	int cnt = 65;
	for (int i = 0; i < N; i++) {
		if (i + 8 > N)	break;
		for (int j = 0; j < M; j++) {
			if (j + 8 > M) break;
			int temp = returnCnt(v, i, j);
			cnt =(cnt > temp) ? temp : cnt;
		}
	}
	cout << cnt;
}

int main() {	
	int N = 8, M = 8;
	cin >> N >> M;
	vector<string> v;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	solve(v, N, M);
}