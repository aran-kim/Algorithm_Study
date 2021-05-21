#include <iostream>

using namespace std;

int triangle[501][501];
int answer[501][501];
int before[501];


int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}

	answer[0][0] = triangle[0][0];

	for (int i = 1; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				answer[i][j] = answer[i - 1][j] + triangle[i][j];
			}
			else if (j == i) {
				answer[i][j] = answer[i - 1][j-1] + triangle[i][j];
			}
			else {
				answer[i][j] = max(answer[i - 1][j - 1],answer[i-1][j]) + triangle[i][j];
			}
		}
	}

	int m = answer[N - 1][0];

	for (int i = 0; i < N; i++) {
		m = max(m, answer[N-1][i + 1]);
	}
	cout << m;
}