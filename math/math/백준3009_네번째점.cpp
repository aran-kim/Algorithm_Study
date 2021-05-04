#include <iostream>

using namespace std;

int main() {
	int x[3], y[3], ax, ay;
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (x[i] == x[j]) {
				ax = 3 - i - j;
			}
			if (y[i] == y[j]) {
				ay = 3 - i - j;
			}
		}
	}
	cout << x[ax] << " " << y[ay];

}