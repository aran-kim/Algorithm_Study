#include <iostream>

using namespace std;
int m;
int oper(int N, int count) {
	if (N == 1) {
		if (count < m) m = count;
		return m;
	}
	if (N % 2 == 0) oper(N / 2, count + 1);
	if (N % 3 == 0) oper(N / 3, count + 1);
	oper(N - 1, count + 1);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	m = N;
	cout << oper(N, 0);
}