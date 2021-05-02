#include <iostream>
using namespace std;

int main() {
	int A, B, C, num = 0;
	cin >> A >> B >> C;

	if ((C - B) <= 0) {
		cout << -1;
		return 0;
	}
	cout << A / (C - B) + 1;
}