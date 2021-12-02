#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	set<string>S;
	while (N--) {
		string t;
		cin >> t;
		S.insert(t);
	}
	
	set<string>V;

	while (M--) {
		string t;
		cin >> t;
		if (S.count(t)) V.insert(t);
	}
	
	cout << V.size() << "\n";
	for (auto i : V) {
		cout << i << "\n";
	}
}