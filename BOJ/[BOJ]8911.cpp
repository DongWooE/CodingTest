#include<iostream>
#include<vector>
using namespace std;

void returnPos(char c,int& curX, int& curY, int& index){
	int pos[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };

	switch (c) {
	case 'F':
		curX += pos[index][0];
		curY += pos[index][1];
		break;
	case 'L':
		index = !(index) ? index = 3 : (index - 1) % 4;
		break;
	case 'R':
		index = (index + 1) % 4;
		break;
	case 'B':
		curX += -1 * pos[index][0];
		curY += -1 * pos[index][1];
		break;
	}
}

void solve(string s) {
	vector<int>curr = { 0,0 };
	vector<int>maxP = { 0,0 };
	vector<int>minP = { 0,0 };
	int index = 0;
	for (auto c : s) {
		returnPos(c, curr[0], curr[1], index);
		for (int i = 0; i < 2; i++) {
			if (maxP[i] < curr[i]) maxP[i] = curr[i];
			if (minP[i] > curr[i]) minP[i] = curr[i];
		}
	}
	cout << (maxP[0] - minP[0]) * (maxP[1] - minP[1]) <<"\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		string temp;
		cin >> temp;
		solve(temp);
	}
}