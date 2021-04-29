#include <iostream>

using namespace std;

int main() {
	int a, b, c, num[10] = {0};
	cin >> a >> b >> c;
	int mul = a * b * c;
	do {
		int charge = mul % 10;
		for (int i = 0; i < 10; i++) {
			if (i == charge)
				num[i] = num[i] + 1;
			else continue;
		}
		mul = mul / 10;
	} while (mul != 0);

	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\n";
	}


}