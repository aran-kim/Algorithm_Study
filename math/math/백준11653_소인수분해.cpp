#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	if (N == 1) return 0;
	while (N!=1) {
		for (int i = 2; i <= N; i++) {
			if (N%i == 0) {
				cout << i <<"\n";
				N = N / i;
				break;
			}
		}
	}
}