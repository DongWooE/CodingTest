#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void permutation(vector<int>& result, vector<int> array, int r) {
	sort(array.begin(), array.end());
	do {
		string temp = "";
		for (int i = 0; i < r; i++)
			temp += to_string(array[i]);
		reverse(array.begin() + r, array.end());		//이렇게 뒤집어주어서 바로 다음번 순열이 되도록 한다
		result.push_back(stoi(temp));
	} while (next_permutation(array.begin(), array.end()));
}

void printArray(vector<int>array) {
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << "\n";
	}
}

int main() {
	vector<int>array = { 3,2,1,4 };
	vector<int>result;
	for (int i = 1; i <= array.size(); i++) {
		permutation(result, array, i);
	}
	printArray(result);
}