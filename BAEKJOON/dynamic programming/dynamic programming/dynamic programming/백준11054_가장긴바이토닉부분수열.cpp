#include <iostream>
#include <math.h>
using namespace std;

int A[1001] = { 0, };
int dp[1001];
int dp2[1001];

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		dp2[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] < A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}


	int answer = 0;
	for (int i = 0; i < N; i++) {
		answer = max(answer, dp[i]);
	}
	cout << answer-1;
}