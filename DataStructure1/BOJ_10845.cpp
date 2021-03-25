#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int>myqueue;
	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			myqueue.push(num);
		}
		else if (str == "pop") {
			if (myqueue.empty()) {
				cout << "-1" << "\n";
				continue;
			}
			int temp = myqueue.front();
			myqueue.pop();
			cout << temp << "\n";
		}
		else if (str == "size") {
			cout << myqueue.size() << "\n";
		}
		else if (str == "empty") {
			if (!myqueue.empty()) {
				cout << "0" << "\n";
				continue;
			}
			cout << "1"<< "\n";
		}
		else if (str == "front") {
			if (myqueue.empty()) {
				cout << "-1" << "\n";
				continue;
			}
			cout << myqueue.front() << "\n";
		}
		else if (str == "back") {
			if (myqueue.empty()) {
				cout << "-1" << "\n";
				continue;
			}
			cout << myqueue.back() << "\n";
		}
	}
}