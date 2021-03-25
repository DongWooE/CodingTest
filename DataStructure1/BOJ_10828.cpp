#include<iostream>
#include<stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	stack<int> mystack;

	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			mystack.push(num);
		}
		else if (str == "pop") {
			if (mystack.empty()) {
				cout << "-1" << "\n";
			}
			else {
				int temp = mystack.top();
				mystack.pop();
				cout << temp << "\n";
			}
		}
		else if (str == "size") {
			cout << mystack.size() << "\n";
		}
		else if (str == "empty") {
			if (!mystack.empty()) {
				cout << "0" << "\n";
			}
			else
				cout << "1" << "\n";
		}
		else if (str == "top") {
			if (mystack.empty())
				cout << "-1" << "\n";
			else
				cout << mystack.top() << "\n";
		}
	}
}