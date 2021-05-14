#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, c=0;

int board[16] = { 0 };

bool possible(int N) {

	for (int j = 0; j < N; j++) {
		if (board[N] == board[j]||(abs(board[N] - board[j]) == abs(N-j))) 
			return false;
	}	
	return true;
}

void check(int N) {
	if (N == n) {
		c++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		board[N]=i;
		if (possible(N)) {
			check(N + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	n = N;
	int size = 0;

	check(0);
	cout << c;
}