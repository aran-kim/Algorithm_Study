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
		for (int j = 0; j < i; j++) {
			answer[i+1][j] = answer[i - 1][j] + triangle[i][j];
			answer[i+1][j+1] = answer[i - 1][j] + triangle[i][j + 1];
			cout << answer[i+1][j] << " ";
		}
		cout << "\n";
	}
	int m = 0;
	for (int i = 0; i < N; i++) {
		m = max(answer[N ][i], answer[N ][i + 1]);
	}
	cout << m;
}