#include <iostream>

using namespace std;

int main() {
	int N, num, sum=0;
	char s[100];
	cin >> N >> s;
	for (int i = 0; i < N; i++) {
		num = s[i] - 48;
		sum = sum + num;
	}
	cout << sum;

}