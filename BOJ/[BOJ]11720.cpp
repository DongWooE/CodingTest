#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	string t;
	cin >> t;
	int sum = 0;
	for (auto i : t)
		sum += i - '0';
	cout << sum;
}