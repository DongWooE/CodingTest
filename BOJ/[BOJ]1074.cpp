#include<iostream>
#include<math.h>
using namespace std;

int a[4][4] = {
	{0,1,4,5},
	{2,3,6,7},
	{8,9,12,13},
	{10,11,14,15}
};

void solve(int N, int r, int c) {
	int weight = 0;
	while (N > 2) {
		int colWeight = (int)(c / (pow(2, N - 1)));
		int rowWeight = ((int)(r / (pow(2, N - 1)))) *2;
		weight += pow(2, (2*N - 2)) * (rowWeight + colWeight);
		
		r -= (int)(r / pow(2, N - 1)) * pow(2, N - 1);
		c -= (int)(c / pow(2, N - 1)) * pow(2, N - 1);

		N--;
	}
	cout << a[r % 4][c % 4] + weight;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, r, c;
	cin >> N >> r >> c;
	solve(N, r, c);
}

