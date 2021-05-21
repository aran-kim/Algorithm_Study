#include <iostream>

using namespace std;

int main() {
	int N, num, count =0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 1)	count++;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				count++;
				break;
			}
			
		}
	}
	cout << N - count;
}