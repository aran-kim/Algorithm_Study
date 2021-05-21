#include <iostream>

using namespace std;
int main() {
	int a[5], sum=0, temp;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int min = a[0];
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (a[i] >= a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	cout << sum / 5 << "\n" << a[2];
}