#include <iostream>

using namespace std;

int main() {
	int T, k, n, sum=0, count =0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		int **arr = new int*[k+1];
		for (int j = 0; j < k+1; j++)
			arr[j] = new int[n+1];

		for (int j = 1; j <= n; j++) {
			arr[0][j] = j;
		}

		for (int j = 0; j <= k; j++) {
			arr[j][1] = 1;
		}

		for (int j = 1; j < k + 1; j++) {
			for (int s = 2; s <= n; s++) {
				arr[j][s] = arr[j-1][s] + arr[j][s-1];
			}
		}

		cout << arr[k][n] << "\n";
	}
}