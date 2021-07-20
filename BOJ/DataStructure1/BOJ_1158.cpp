#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int>array;

	for (int i = 0; i < n; i++) {
		array.push_back(i + 1);
	}
	int index = 0;
	cout << "<";
	while (n--) {
		index = (index + (k-1)) % array.size();
		if (array.size() == 1) {
			cout << array[index] << ">";
		}
		else cout << array[index]<< "," << " ";
		array.erase(array.begin() + index);
	}
}