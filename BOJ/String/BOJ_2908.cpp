#include<iostream>
#include<string>
using namespace std;

int function(string s) {
	string temp;
	string::iterator it = s.end() - 1;
	while (1) {
		temp += *it;
		if (it == s.begin()) break;
		it--;
	}
	return stoi(temp);
}

int main() {

	string A, B;
	cin >> A >> B;
	int num1 = function(A);
	int num2 = function(B);

	if (num1 > num2) cout << num1;
	else cout << num2;
}


