#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int *card = new int[N];
	for (int i = 0; i < N; i++) cin >> card[i];
	int max = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum > max && sum <= M)
					max = card[i] + card[j] + card[k];
			}
		}
	}
	cout << max;

}