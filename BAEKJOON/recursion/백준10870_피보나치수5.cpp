#include <iostream>

using namespace std;
int answer;

int fibonacci(int N) {
	if (N == 0 || N == 1) return N;

	return fibonacci(N - 2) + fibonacci(N - 1);
	
}

int main() {
	int N;
	cin >> N;
	cout << fibonacci(N);
}