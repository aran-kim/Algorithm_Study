#include <iostream>

using namespace std;

int main() {

	int A, B;
	while (1) {
		cin >> A >> B;
		if (cin.eof() == true) break;
		cout << A + B << "\n";
	}
}