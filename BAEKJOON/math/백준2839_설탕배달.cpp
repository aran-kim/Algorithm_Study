#include <iostream>

using namespace std;

int main() {
	int N, sum=0, min=100000;
	cin >> N;

	
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j < 1700; j++) {
			if (5 * i + 3 * j == N&& min>i+j) {
				min = i + j;
			}
		}
	}
	
	if(min==100000)	cout << -1;
	else cout << min;
}