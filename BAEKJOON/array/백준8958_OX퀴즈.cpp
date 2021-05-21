#include <iostream>

using namespace std;

int main() {
	int N, score = 0, count = 0;;
	cin >> N;
	char **result = new char*[N];
	for (int i = 0; i < N; i++) {
		result[i] = new char[80];
	}

	for (int i = 0; i < N; i++) {
		cin >> result[i];
	}
	
	for (int i = 0; i < N; i++) {
		score = 0;
		count = 0;
		for (int j = 0; result[i][j] != NULL; j++) {
			if (result[i][j] == 'O') {
				count++;
				score = score + count;
			}
			else {
				count = 0;
			}
		}
		cout << score << "\n";
	}

}