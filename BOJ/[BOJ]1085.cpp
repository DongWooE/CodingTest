#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y, h, w;
	cin >> x >> y >> w >> h;

	int t1 = min(x, y);
	int t2 = min(w-x, h-y);
	cout << min(t1, t2);

}