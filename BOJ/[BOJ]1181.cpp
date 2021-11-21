#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) return a < b;
	else return (a.size() > b.size()) ? 0 : 1;
}

void solve(vector<string> v) {
	sort(v.begin(), v.end(), compare);
	
	for (auto i : v)
		cout << i << "\n";

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	unordered_set<string>s;
	vector<string>v;

	while (N--) {
		string temp;
		cin >> temp;
		if (!s.count(temp)) {
			v.push_back(temp);
			s.insert(temp);
		}	
	}

	solve(v);
}