#include <iostream>

using namespace std;

int main() {
	int N, denominator = 1, numerator = 1;
	cin >> N;
	int k = 0;
	int seq = 1;
	for (int i = 0; i < N-1; i++) {		
		switch (seq) {
		case 1:
			denominator++;
			seq = 2;
			break;
		case 2:
			while (denominator != 1&&(i<N-1)) {
				denominator--; numerator++;
				i++;
			}
			i--;
			seq = 3;
			break;
		case 3:
			numerator++;
			seq = 4;
			break;
		case 4:
			while (numerator != 1&&(i<N-1)) {
				denominator++; numerator--;
				i++;
			}
			i--;
			seq = 1;
			break;
		}
	}

	cout << numerator << "/" << denominator;
}