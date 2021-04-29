#include <iostream>

using namespace std;

int main() {
	int card[20], range[10][2], temp;
	for (int i = 0; i < 20; i++) {
		card[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++)
			cin >> range[i][j];
	}

	for (int i = 0; i <10; i++) {
		int a = range[i][0] - 1;
		int b = range[i][1];
		for (int j = a; j < b-1; j++) {
			for (int k = j + 1; k < b; k++) {
					temp = card[j];
					card[j] = card[k];
					card[k] = temp;
			}
		}
	}
	for (int i = 0; i < 20; i++) {
		cout << card[i] << " ";
	}

}