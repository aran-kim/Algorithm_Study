#include <iostream>

using namespace std;

long long arr[101][10] = { 0 };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	long long count = 0;
	cin >> N;

	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				arr[i][j] = arr[i - 1][1] % 1000000000;
			}
			else if (j == 9) {
				arr[i][j] = arr[i - 1][8] % 1000000000;
			}
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		count += arr[N][i];
		count %= 1000000000;
	}
	cout << count;
}