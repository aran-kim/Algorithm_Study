#include <bits/stdc++.h>

using namespace std;

int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		int *number = new int[N+1];
		for (int i = 0; i < N + 1; i++)	number[i] = 0;
		number[0] = 1; number[1] = 1;

		for (int i = 2; i <= (int)sqrt(N); i++) {
			if (number[i] == 1) continue;
			for (int j = i * i; j <= N; j += i) {
				number[j] = 1;
			}
		}
		int * sosu = new int[N+1];
		int x = 0;
		for (int i = 0; i < N; i++) {
			if (number[i] == 0) {
				sosu[x] = i;
				x++;
			}
		}		
		
		int mincha = N;
		int answer[2];
		for (int i = 0; i < x; i++) {
			for (int j = i; j< x; j++) {
				
				if (sosu[i] + sosu[j] == N) {
					if (sosu[i] >= sosu[j]) {
						int cha = sosu[i] - sosu[j];
						if (cha < mincha) {
							mincha = cha;
							answer[0] = sosu[j];
							answer[1] = sosu[i];
						}
					}
					else {
						int cha = sosu[j] - sosu[i];
						if (cha < mincha) {
							mincha = cha;
							answer[0] = sosu[i];
							answer[1] = sosu[j];
						}
					}
				}
			}
		}
		cout << answer[0] << " " << answer[1] << "\n";

	}
}