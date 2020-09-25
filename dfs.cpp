#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	cout << "number of vertex : ";
	cin >> n;
	cout << " number of edge :";
	cin >> m;
	vector<vector<int>>E(n, vector<int>());
	stack<int>mystack;
	vector<int>check(n, 0);  //array that checking which vertex is visited

	cout << "insert edge : (vertex vertex)";
	for (int i = 0; i < m; i++) {  //inserting edges by using adjacent list
		int t1, t2;
		cin >> t1 >> t2;
		E[t1].push_back(t2);
		E[t2].push_back(t1);
	}
	for (int i = 0; i < n; i++)  sort(E[i].begin(), E[i].end());
	int start = 0;
	check[start] = 1;
	mystack.push(start);
	while (!mystack.empty()) {
		start = mystack.top();
		int i;
		cout << start << " ";
		for (i = 0; i < E[start].size(); i++) {
			if (!check[E[start][i]]) {
				cout << E[start][i] << " ";
				check[E[start][i]] = 1;
				mystack.push(E[start][i]);
				break;
			}
		}
		if (i == E[start].size())
			mystack.pop();
	}
}
