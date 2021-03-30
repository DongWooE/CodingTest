#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	stack<char>mystack;
	while (n--) {
		string str;
		cin >> str;
		for(string::iterator it = str.begin(); it!=str.end(); it++){
			if (mystack.empty() || mystack.top() != *it ) {
				mystack.push(*it);
			}
			else {
				mystack.pop();
			}
		}
		if (mystack.empty()) count++;
		while (!mystack.empty()) mystack.pop();
	}
	cout << count;
}