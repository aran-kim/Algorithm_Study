#include <iostream>

using namespace std;

int main() {
	int n, num[10] = { 0 }, count = 0;
	cin >> n;
	do {
		int a = n % 10;
		num[a]++;
		n /= 10;
	} while (n > 0);

	int max = 0, idx=0, set;
	for (int i = 0; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
			idx = i;
		}
	}
	if (idx == 6 || idx ==9) {
		if ((num[6] + num[9]) % 2 == 0) {
			set = (num[9] + num[6]) / 2;
		}
		else {
			set = (num[6]+num[9]) / 2 + 1;
		}			
		for (int i = 0; i < 10; i++) {
			if (set < num[i]&& i!=6 && i!=9) {
				set = num[i];
			}
		}
		cout << set;
	}
	else cout << num[idx];
}