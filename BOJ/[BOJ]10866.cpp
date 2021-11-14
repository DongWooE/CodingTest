#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v, string str) {
	if (str == "push_front") {
		int temp;
		cin >> temp;
		v.insert(v.begin(), temp);
	}
	else if (str == "push_back") {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	else if (str == "pop_front") {
		if (v.empty()) cout << "-1\n";
		else { 
			cout << v.front() << "\n";
			v.erase(v.begin());
		}
	}
	else if (str == "pop_back") {
		if (v.empty()) cout << "-1\n";
		else {
			cout << v.back() << "\n";
			v.pop_back();
		}
	}
	else if (str == "size") {
		cout << v.size() << "\n";
	}
	else if (str == "empty") {
		cout << v.empty() << "\n";
	}
	else if (str == "front") {
		if (v.empty()) cout << "-1\n";
		else cout << v.front() << "\n";
	}
	else {	// str == back
		if (v.empty()) cout << "-1\n";
		else cout << v.back() << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<int>v;
	while (N--) {
		string temp;
		cin >> temp;
		solve(v, temp);
	}
}