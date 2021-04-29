#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, size =10, temp;
	int rest[10];

	for (int i = 0; i < 10; i++) {
		cin >> x;
		rest[i] = x % 42;
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 10; j++) {
			if (rest[i] <= rest[j]) {
				temp = rest[i];
				rest[i] = rest[j];
				rest[j] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (rest[i] == rest[i + 1]) {
			size--;
		}
	}
	cout << size;
}