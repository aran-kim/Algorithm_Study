#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j <i; j++) cout << "*";
		for (int j = 2 * N - i; j > i; j--) cout << " ";
		for (int j = 0; j < i; j++) cout << "*";

		printf("\n");
	}
	for (int i = N-1; i > 0; i--) {
		for (int j = 0; j < i; j++) cout << "*";
		for (int j = 2 * N - i; j > i; j--) cout << " ";
		for (int j = 0; j < i; j++) cout << "*";
		printf("\n");
	}
}