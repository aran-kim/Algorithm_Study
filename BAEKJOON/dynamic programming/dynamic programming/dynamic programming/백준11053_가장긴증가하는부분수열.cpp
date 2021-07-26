#include <iostream>

using namespace std;

int A[1001] = { 0, };
int dp[1001];

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
	}

	int count = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int m = 0;
	for (int i = 0; i < N; i++) {
		m = max(m, dp[i]);
	}
	cout << m;

}