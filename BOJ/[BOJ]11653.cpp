#include<iostream>
using namespace std;

void solve(){
	int N;
	cin >> N;
	
	while (N > 1) {
		int i = 2;
		for (i; i <= N; i++)
			if (N % i == 0) {
				cout << i << "\n";
				break;
			} 
		N /= i;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}