#include <iostream>

using namespace std;
int dp = 0;
int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}
	else if (a < b && b < c) {
		return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}
	else {
		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a, b, c;
	cin >> a >> b >> c;
	while (a != -1 && b != -1 && c != -1) {
		dp = w(a, b, c);
		printf("w(%d, %d, %d) = %d\n", a, b, c, dp);
		cin >> a >> b >> c;
	}
}

//¤¡¤§