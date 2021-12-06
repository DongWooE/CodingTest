#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int i = 1;
	int num = 666;
	while (1) {
		if (i == N) { 
			cout << num << "\n";
			break;
		}
		string t = to_string(++num);
		if (t.find("666") != -1)	i++;
	}
}