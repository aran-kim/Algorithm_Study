#include <iostream>

using namespace std;
long long dp[101] = { 0, };

long long fibonacci(int N) {
	
	if (N <= 3) {
		return dp[N] = 1;
	}


	if (dp[N] != 0) {
		return dp[N];
	}
	else return dp[N] = fibonacci(N - 2) + fibonacci(N - 3);
}

int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		fibonacci(N);
		cout << dp[N] << "\n";
	}
}