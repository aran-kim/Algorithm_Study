#include <iostream>

using namespace std;

int stair[301] = { 0, };
int result[301] = { 0, };

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int N, m, count;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> stair[i];
	}
	result[0] = 0;

	for (int i = 1; i < 3; i++) {
		result[i] = result[i-1] + stair[i];
	}
	
	for (int i = 3; i <= N; i++) {
		result[i] = max(result[i - 2], result[i - 3] + stair[i - 1]) + stair[i];
	}
	
	cout << result[N];

}