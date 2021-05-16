#include <iostream>

using namespace std;

int dp[41] = { 0, };

int fibonacci(int N) {
	if (N == 0) {
		dp[0] = 0;
		return 0;
	}
	if (N == 1) {
		dp[1] = 1;
		return 1;
	}
	if (dp[N] != 0) {
		return dp[N];
	}
	else return dp[N] = fibonacci(N - 2) + fibonacci(N - 1);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		fibonacci(N);
		if (N == 0) cout << 1 << " " << 0 << "\n";
		else cout <<dp[N-1] << " " << dp[N] << "\n";
	}
		
}