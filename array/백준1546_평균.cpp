#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;
	int *score = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		sum = sum + score[i];
	}

	int max = score[0];

	for (int i = 1; i < N; i++) {
		if (max < score[i])
			max = score[i];
	}
	float avg = (float) sum / N;

	cout << float (avg / max )* 100;
}