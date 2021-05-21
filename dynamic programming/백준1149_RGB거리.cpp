#include <iostream>
#include <algorithm>

using namespace std;
int result[3] = { 0, };
int mem[3] = { 0, };
int min(int a, int b) {
	return a < b ? a : b;
}


void w(int r, int g, int b) {
	result[0] = min(mem[1],mem[2]) + r;
	result[1] = min(mem[0], mem[2]) + g;
	result[2] = min(mem[0], mem[1]) + b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int r, g, b;
	cin >> N;
	cin >> r >> g >> b;
	result[0] = r;
	result[1] = g;
	result[2] = b;

	for (int i = 1; i < N; i++) {
		for (int i = 0; i < 3; i++) {
			mem[i] = result[i];
		}
		cin >> r >> g >> b;
		w(r, g, b);
	}
	cout << min(min(result[0],result[1]),result[2]);
}