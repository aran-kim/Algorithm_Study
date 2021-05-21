#include <iostream>

using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	int min = N, sum =0;
	for (int i = M; i <= N; i++) {
		if (i == 1) continue;
		int sosu = 0;
		for (int j = 2; j < i; j++) {
			if (i %j == 0) {
				sosu++;
				break;
			}
		}
		if (sosu == 0) {
			if (min > i) min = i;
			sum = sum + i;
		}

	}
	if (sum == 0)	cout << -1;
	else cout << sum << "\n" << min;
}