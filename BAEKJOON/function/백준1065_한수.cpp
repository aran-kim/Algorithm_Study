#include <iostream>

using namespace std;


void count_series(int num) {
	int count = 0;
	if (num > 0 && num < 100) {
		cout << num;
	}
	else {
		for (int i = num; i >= 100; i--) {
			if (i / 100 - i % 100 / 10 == i % 100 / 10 - i % 100 % 10) count++;
		}
		cout << 99 + count;
	}
}

int main() {
	int num;
	cin >> num;
	count_series(num);
	return 0;
}