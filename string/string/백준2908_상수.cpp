#include <iostream>

using namespace std;

int main() {
	char A[5], B[5];
	cin >> A >> B;
	int num1, num2;
	num1 = (A[0] - 48) + (A[1] - 48) * 10 + (A[2] - 48) * 100;
	num2 = (B[0] - 48) + (B[1] - 48) * 10 + (B[2] - 48) * 100;

	if (num1 > num2) {
		cout << num1;
	}
	else cout << num2;

}