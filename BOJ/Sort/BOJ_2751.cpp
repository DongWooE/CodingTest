#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int>array;

	while (n--) {
		int temp;
		cin >> temp;
		array.push_back(temp);
	}
	
	sort(array.begin(), array.end());

	for (int i = 0; i < array.size(); i++) {
		if (i != 0 && array[i] == array[i-1]) {
			continue;
		}
		cout << array[i] << "\n";
	}
	
}