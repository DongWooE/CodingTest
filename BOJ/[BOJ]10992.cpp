#include<iostream>
#include<string>
using namespace std;

void solve(int n) {

	for (int i = 1; i <= n; i++) {
		string t_star = "";
		if (i == n) {
			for (int j = 0; j < 2 * n - 1; j++)
				t_star += "*";
		}
		else {
			for (int j = 0; j < n - i; j++)
				t_star += " ";
			t_star += "*";
			if (i >= 2) {
				for (int j = 0; j < 2 * (i - 2) + 1; j++)
					t_star += " ";
				t_star += "*";
			}
		}
		cout << t_star << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	solve(N);
}