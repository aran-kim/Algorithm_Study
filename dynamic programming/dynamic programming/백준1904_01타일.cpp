#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	long long num1 = 1, num2= 1;
	long long sum = 1;


	for (int i = 1; i < N; i++) {
		sum = (num1 + num2) % 15746;
		num1 = num2;
		num2 = sum;
	}

	cout << sum%15746;

}