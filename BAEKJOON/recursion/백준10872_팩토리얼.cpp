#include <iostream>

using namespace std;

int answer;

int factorial(int N) {
	if (N == 0) return answer;
	answer *= N;
	return factorial(N - 1);
}


int main() {
	int N;
	cin >> N;
	answer = 1;
	
	cout << factorial(N);
}