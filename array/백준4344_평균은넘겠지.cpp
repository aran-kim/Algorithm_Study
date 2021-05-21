#include <iostream>
using namespace std;

int main() {
	int C, N;
	cin >> C;
	for (int i = 0; i < C; i++) {
		int sum = 0, count = 0;
		cin >> N;
		int *score = new int[N];
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			sum = sum + score[j];
		}
		for (int j = 0; j < N; j++) {
			if (score[j] > float(sum / N))
				count++;
		}
		cout << fixed;
		cout.precision(3);
		float answer = (float)count / N *100;
		cout << answer << "%\n";
	}
}