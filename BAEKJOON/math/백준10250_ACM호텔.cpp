#include <iostream>

using namespace std;

int main() {
	int T, H, W, N, height, number;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		if (N%H == 0) {
			height = H;
		}
		else height = N % H;

		if(N%H==0)	number = N / H;
		else number = N / H + 1;

		cout << height*100 + number << "\n";
		
	}
}