#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int table[10001] = { 0, };
int dp[10001] = { 0, };

int main() {
	int N, answer;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> table[i];
	}

	dp[0] = table[0];

	for (int i = 1; i < N; i++) {
		dp[i] = max(dp[i - 3] + table[i - 1], dp[i - 2]) + table[i];
		dp[i] = max(dp[i - 1], dp[i]);
	}

	
	cout << dp[N-1];

}