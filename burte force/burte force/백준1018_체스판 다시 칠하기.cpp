#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	
	char **board = new char *[N];
	for (int i = 0; i < N; i++) {
		board[i] = new char[M];
		cin >> board[i];
	}
	
	int check = 0, min = N * M;
	bool color = true;
	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M-7; j++) {
			check = 0;
			if (board[i][j] == 'W') color = true;
			else color = false;
			for (int k = i; k < i + 8; k++) {
				for (int s = j; s < j + 8; s++) {
					if (board[k][s] !='W' && color) {
						check++;
					}
					else if (board[k][s] != 'B' && !(color)) {
						check++;
					}
					color = !color;
				}
				color = !color;
			}
			if (check > 32) check = 64 - check;
			if (check < min) min = check;
		}
	}

	cout << min;

}