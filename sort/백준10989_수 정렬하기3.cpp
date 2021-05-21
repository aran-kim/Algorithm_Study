#include <bits/stdc++.h>
// 카운팅 정렬
using namespace std;

int main() {
	int N, num;
	scanf("%d", &N);
	int count[10001] = { 0, };
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		
		while (count[i] != 0) {
			cout << i << "\n";
			count[i]--;
		}
		
	}
}