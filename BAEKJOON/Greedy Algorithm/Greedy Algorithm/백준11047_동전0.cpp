#include <iostream>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int count = 0;
	while (K != 0) {
		int max = 0;
		for (int i = 0; i < N; i++) {
			if (arr[i] > K)	break;
			if (arr[i] >= max) {
				max = arr[i];
			}
		}
		K -= max;
		count++;
	}
	cout << count;
}