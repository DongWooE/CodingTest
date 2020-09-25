#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
	int n,m;
	cout << "number of vertex : ";
	cin >> n;
	cout << " number of edge :";
	cin >> m;
	vector<vector<int>>E(n, vector<int>());
	queue<int> Q;
	vector<int>checking(n, 0);
	
	cout << "insert edge : (vertex vertex)";
	for (int i = 0; i < m; i++) {
		int t1, t2;
		cin >> t1 >> t2;
		E[t1-1].push_back(t2-1);
		E[t2-1].push_back(t1-1);
	}
	for (int i = 0; i < E.size(); i++)
		sort(E[i].begin(), E[i].end());
	int start = 0;
	checking[start] = 1;
	Q.push(start);
	while (!Q.empty()) {
		start = Q.front();
		cout << start + 1 << " ";
		Q.pop();

		for (int i = 0; i < E[start].size();i++) {
			if (!checking[E[start][i]]) { 
				checking[E[start][i]] = 1;
				Q.push(E[start][i]); }
		}
	}
	

}