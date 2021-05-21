#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	while (N != 0) {
		int count = 0;
		
		int * x = new int[2*N +1];
		for (int i = 0; i <= 2 * N; i++)	x[i] = 0;
		x[0] = 1; x[1] = 1;

		for (int i = 2; i <= (int) sqrt(2 * N); i++) {
			if (x[i]==1)	continue;
			for (int j = i*i; j <= 2*N; j+=i) {
				x[j] = 1;
			}
		}
		for (int i = N + 1; i <= 2 * N; i++) {
			if (x[i]==0) count++;
		}
		cout << count << "\n";

		cin >> N;
	}
}