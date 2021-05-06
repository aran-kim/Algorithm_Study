#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	int NUM = N, sum=0, count = 1;
	int num[7] = { 0, };
	while (N / 10 != 0) {
		count++;
		N /= 10;
	} 

	for (int i = 0; i < NUM; i++) {
		sum = 0;
		for (int j = 0; j < count; j++) {
				num[j] = i / int(pow(10,j)) % 10;
				sum += num[j];
				sum += num[j] * int(pow(10, j));
		}
		if (sum == NUM) break;
		sum = 0;
	}

	if (sum == 0) cout << 0;
	else if (num[count - 1] == 0)
		for (int i = count - 2; i >= 0; i--) cout << num[i];
	else for (int i = count - 1; i >= 0; i--) cout << num[i];
	
}