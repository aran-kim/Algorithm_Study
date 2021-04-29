#include <iostream>

using namespace std;

int main() {
	int a[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < 3; i++) {
		int front = 0, back = 0;
		for (int j = 0; j < 4; j++) {
			if (a[i][j] == 1) {
				front += 1;
			}
			else if (a[i][j] == 0) {
				back += 1;
			}
		}
		if (front == 3 && back == 1) {
			cout << "A\n";
		}
		else if (front == 2 && back == 2) {
			cout << "B\n";
		}
		else if (front == 1 && back == 3) {
			cout << "C\n";
		}
		else if (back == 4) {
			cout << "D\n";
		}
		else if (front == 4) {
			cout << "E\n";
		}
	}
}