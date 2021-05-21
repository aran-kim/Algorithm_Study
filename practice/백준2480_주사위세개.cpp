#include <iostream>

using namespace std;

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	if (a[0] == a[1] && a[1] == a[2]) {
		cout << 10000 + a[0] * 1000;
	}
	else if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
		int max = a[0];
		for (int i = 0; i < 3; i++) {
			if (max < a[i])
				max = a[i];
		}
		cout << 100 * max;
	}
	else {
		int count = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = i+1; j < 3; j++) {
				if (a[i] == a[j]) {
					count = a[i];
				}		
			}
		}
		cout << 1000 + count * 100;
	}
}