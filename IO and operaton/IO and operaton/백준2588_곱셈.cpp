#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	cout << A * (B % 100 % 10) << "\n";
	cout << A * (B % 100 / 10) << "\n";
	cout << A * (B / 100) << "\n";
	cout << A * B;

}