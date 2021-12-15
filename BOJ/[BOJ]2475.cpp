#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 5;
	int sum = 0;
	while (N--)
	{
		int t;
		cin >> t;
		sum += t * t;
	}
	cout << sum % 10 << "\n";
}