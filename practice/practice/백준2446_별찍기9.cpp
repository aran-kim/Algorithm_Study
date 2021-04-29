#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) cout << " ";
		for (int j = 2 * N - i-1; j > i; j--) cout << "*";
		printf("\n");
	}
	for (int i = N-2; i >= 0; i--) {
		for (int j = 0; j < i; j++) cout << " ";
		for (int j = 2 * N - i - 1; j > i; j--) cout << "*";
		printf("\n");
	}
}