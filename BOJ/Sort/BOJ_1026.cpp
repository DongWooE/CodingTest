#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void func(int n, vector<int>&array) {
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		array.push_back(temp);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int>A;
	vector<int>B;

	func(5, A);
	func(5, B);

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	reverse(B.begin(), B.end());

	int sum = 0;
	for (int i = 0; i < n; i ++) {
		sum += A[i] * B[i];
	}
	cout << sum;
}


