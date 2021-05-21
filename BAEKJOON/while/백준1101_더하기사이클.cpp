#include <iostream>

using namespace std;

int main() {
	int N = 1;
	int num, temp;
	cin >> num;
	if (num < 10) {
		num = num * 10;
	}
	temp = (num / 10 + num % 10)%10 + num % 10 * 10;
	while (num != temp) {
		temp = (temp / 10 + temp % 10)%10 + temp % 10 * 10;
		N++;
	}
	cout << N;
}