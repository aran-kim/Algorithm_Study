#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int M, N;
	cin >> M >> N;

	int *x = new int[N+1];
	for (int i = 0; i <= N; i++) x[i] = 0;

	x[1] = 0;
	x[2] = 1;
	x[3] = 1;
	for (int i = M; i <= N; i++) {
		for (int j = 2; j <= (int)sqrt(i); j++) {
			if (i%j == 0) {
				break;
			}
			if (j == (int)sqrt(i))
				x[i] = 1;	
		}
	}
	for (int i = M; i <= N; i++) {
		if (x[i]) cout << i << "\n";
	}
}