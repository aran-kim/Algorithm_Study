#include <iostream>

using namespace std;

int arr[10001] = { 0,0,0, };

int selfnumber(int num) {
	int sum = num;
	while (1) {
		if (num == 0) break;
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}


int main() {
	int num;
	for (int i = 0; i < 10000; i++) {
		num = selfnumber(i);
		arr[num] = 1;
	}

	for (int i = 1; i < 10000; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}
}