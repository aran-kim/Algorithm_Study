#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = a; j > i; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}