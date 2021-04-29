#include <iostream>

using namespace std;

int main() {
	int a[9];
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < 9; i++) {
		if (max < a[i])
			max = a[i];
	}
	cout << max << "\n";
	int count = 0;
	for (int i = 0; i < 9; i++) {
		count++;
		if (a[i] == max)
			break;
	}
	cout << count;
}