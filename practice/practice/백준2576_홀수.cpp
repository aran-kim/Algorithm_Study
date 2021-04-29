#include <iostream>

using namespace std;

int main() {
	int a[7], b[7];
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
	}
	int sum = 0 , count = 0, min;
	for (int i = 0; i < 7; i++) {
		if (a[i] % 2 == 1) {
			sum += a[i];
			b[count] = a[i];
			count += 1;
		}
	}
	min = b[0];
	for (int i = 0; i < count; i++) {
		if (min > b[i])
			min = b[i];
	}
	if (count == 0)
		cout << "-1";
	else
		cout << sum << "\n" << min;
}