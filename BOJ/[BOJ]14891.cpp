#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<queue>
using namespace std;

vector<int> bfs(vector<string> v, pair<int,int>p) {
	bool check[4] = { false, };
	vector<int>value(4,0);
	queue<int>Q;
	Q.push(p.first - 1);
	value[p.first - 1] = p.second;
	while (!Q.empty()) {
		int temp = Q.front();
		check[temp] = true;
		Q.pop();
		int left = temp - 1, right = temp + 1;
		if (left >= 0 && !check[left]) {
			Q.push(left);
			if (!value[temp]) value[left] = 0;		//이전 바퀴가 돌지 않는다면
			else if (v[left][2] != v[temp][6]) value[left] = -1*value[temp];		//반대로 도는 경우
			else value[left] = 0;	// 바퀴가 여전히 돌아간다
		}
		if (right < 4 && !check[right]) { 
			Q.push(right); 
			if (!value[temp]) value[right] = 0;		//이전 바퀴가 돌지 않는다면
			else if (v[temp][2] != v[right][6]) value[right] = -1*value[temp];		//반대로 도는 경우
			else value[right] = 0;	// 바퀴가 여전히 돌아간다
		}
	}
	return value;
}

void transform(vector<string>&v, vector<int>value) {
	for (int i = 0; i < 4; i++) {
		if (value[i] == 1) {
			char c = v[i][7];
			v[i].pop_back();
			v[i].insert(v[i].begin(), c);
		}
		else if (value[i] == -1) {
			char c = v[i][0];
			v[i].erase(v[i].begin());
			v[i].push_back(c);
		}
	}
}

void solve(vector<string>v, vector<pair<int,int>>p) {
	for (auto e : p) {
		vector<int>value= bfs(v, e);
		transform(v, value);
	}

	int arr[4] = { 1,2,4,8 };
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if (v[i][0] == '1') sum += arr[i];
	}
	cout << sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N = 4;
	vector<string>v;
	
	while (N--) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	int K;
	cin >> K;
	vector<pair<int, int>>p;
	while (K--) {
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		p.push_back(temp);
	}

	solve(v, p);
}