#include <iostream>
#include<time.h>
using namespace std;

int N;
char board[2188][2188];

void star(int n, int x, int y) {
	if (n <= 3) return;
	if (x + n / 3 > N || y + n/3> N) return;

	for (int i = x; i < x + n / 3; i++) {
		for (int j = y; j < y + n / 3; j++) {
			board[i][j] = ' ';
		}
	}

	star(n / 3,  x / 3, y / 3);
	for (int i = n / 3; i <= N - n / 3; i += n / 3) {

		star(n / 3,  x / 3 + i, y / 3);
		star(n / 3, x / 3, y / 3 + i);

		for (int j = n / 3; j <= N - n / 3; j += n / 3) {
			star(n / 3,  x / 3 + i, y / 3 + j);
		}
	}
	return;
}

int main() {
	cin >> N;
	cin.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j % 3 == 1 && i % 3 == 1) board[i][j] = ' ';
			else board[i][j] = '*';
		}
	}
	star(N, N / 3, N / 3);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
}