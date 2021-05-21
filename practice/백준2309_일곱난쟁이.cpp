#include <iostream>

using namespace std;

int main() {
	int a[9], b[7],c[2], sum=0 ,count =0 ,temp;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 9; i++) {
		sum += a[i];
	}
	int charge = sum - 100;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (a[i] + a[j] == charge) {
				c[0] = i;
				c[1] = j;
				continue;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i == c[0] || i == c[1]) {
			count += 1;
		}
		else {
			b[i - count] = a[i];
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (b[i] > b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << b[i] << "\n";
	}
}