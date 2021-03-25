#include<iostream>
#include<string>
using namespace std;

int main() {

	int T;
	cin >> T;
	while (T--) {
		int R;
		cin >> R;
		string S;
		cin >> S;
		for (string::iterator it = S.begin(); it != S.end(); it++) {
			for (int i = 0; i < R; i++)
				cout << *it;
		}
		cout << "\n";
	}
}