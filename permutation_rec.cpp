#include<iostream>
#include<vector>
using namespace std;

bool visited[4];
vector<int>result;
void permutation(vector<int>&array, int m) {
	if (result.size() == m) {
		for (auto i : result) {
			cout << i << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < array.size(); i++) {
		if (!visited[i]) {
			visited[i] = true;
			result.push_back(array[i]);
			permutation(array, m);
			result.pop_back();
			visited[i] = false;
		}
	}
}

int main() {
	vector<int>array = { 1,2,3,4 };
	for(int i =0; i<= array.size(); i++){
		permutation(array, i);
	}
}