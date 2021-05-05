#include <iostream>
#include<time.h>
using namespace std;

int N;
char board[2188][2188];

void star(int n, int x, int y) {

	int div = n / 3;
	if (n == 1) {
		board[x][y] = '*';
		return;
	}

	for (int i = x; i < x + n; i+=div) {
		for (int j = y; j < y + n; j+=div) {
			if (i == x + div && j == y + div) continue;
			else star(div, i, j);
		}
	}

}

int main() {
	cin >> N;
	cin.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			board[i][j] = ' ';
		}
	}
	star(N,0, 0);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
	cout << clock();
}