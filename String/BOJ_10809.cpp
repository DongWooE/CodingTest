#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<int>myvector(26, -1);
	string S;
	cin >> S;

	int order = 0;
	for (string::iterator it = S.begin(); it != S.end(); it++) {
		int temp = (int)*it - 97;
		if (myvector[temp] == -1) {
			myvector[temp] = order;
		}
		order++;
	}
	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector[i] << " ";
	}
}