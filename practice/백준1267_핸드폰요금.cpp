#include <iostream>

using namespace std;

int main() {
	int value_Y=0, value_M=0;
	int n;
	cin >> n;
	int * time = new int[n];
	for (int i = 0; i < n; i++)
		cin >> time[i];

	for (int i = 0; i < n; i++) {
		value_Y += (time[i] / 30 + 1)*10;
		value_M += (time[i] / 60 + 1) * 15;
	}
	if (value_Y < value_M) {
		cout << "Y " << value_Y;
	}
	else if (value_Y > value_M) {
		cout << "M " << value_M;
	}
	else {
		cout << "Y M " << value_M;
	}
}