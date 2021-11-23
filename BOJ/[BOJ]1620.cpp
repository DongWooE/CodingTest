#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<string>v;
	map<string, int>m;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		m.insert({ temp, i+1 });
		v.push_back(temp);
	}

	while (M--) {
		string t;
		cin >> t;
		if (isdigit(t[0])) cout << v[stoi(t) -1] << "\n";
		else {
			if (!m[t]) {
				char temp = t.back();
				t.pop_back();
				t += toupper(temp);
			} 
			cout << m[t] << "\n";
		}
	}
}