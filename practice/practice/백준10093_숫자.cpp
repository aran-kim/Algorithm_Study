#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	int size;
	if (a > b) {
		size = a - b -1;
		cout << size << "\n";

		for (long long i = b + 1; i < a; i++) {
			cout << i <<" ";
		}
	}
	else if (a == b) {
		size = 0;
		cout << size <<endl;
	}
	else {
		size = b - a - 1;
		cout << size << "\n";
		for (long long i = a + 1; i < b; i++) {
			cout << i << " ";
		}
	}
}