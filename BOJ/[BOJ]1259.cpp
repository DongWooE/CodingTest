#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while (1) {
		string t1;
		cin >> t1;
		if (t1 == "0") break;
		string t2 = t1;
		reverse(t1.begin(), t1.end());
		if (t1 == t2) cout << "yes\n";
		else cout << "no\n";
	}
}